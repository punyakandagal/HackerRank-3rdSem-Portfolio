vector<int> matchingStrings(vector<string> stringList, vector<string> queries) {
    unordered_map<string, int> frequency;
    vector<int> result;

    for (string str : stringList) {
        frequency[str]++;
    }

    for (string query : queries) {
        result.push_back(frequency[query]);
    }

    return result;
}
