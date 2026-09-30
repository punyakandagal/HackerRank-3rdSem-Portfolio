vector<int> dynamicArray(int n, vector<vector<int>> queries) {
    vector<vector<int>> seqList(n);
    vector<int> result;
    int lastAnswer = 0;

    for (auto query : queries) {
        int type = query[0];
        int x = query[1];
        int y = query[2];

        int index = (x ^ lastAnswer) % n;

        if (type == 1) {
            seqList[index].push_back(y);
        }
        else if (type == 2) {
            lastAnswer = seqList[index][y % seqList[index].size()];
            result.push_back(lastAnswer);
        }
    }

    return result;
}
