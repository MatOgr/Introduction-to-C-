#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

/*  
    TODO: Task 1.1: Write a function called `fold_change` accepting two `double' arguments and returning one `double` value.

    The function should calculate the fold change between the two values → a / b

    The rules it should obey:
    - if b is 0 → return 0
    - if either value is negative → skip the calculation and return -1
*/
double fold_change(double a, double b) {
    if (b == 0) {
        return 0;
    }
    double result = a / b;
    if (result < 0) {
        return -1;
    }
    return result;
}


/*
    TODO: Task 1.2: Write a function called `is_upgregulated` that tells whether a gene is upregulated or not given a fold change.
    Choose the correct return and input parameter type.

    Rules:
    - fold_change >= 2 → return true
    - otherwise → return false
*/
bool is_upgregulated(double fold_change) {
    return fold_change >= 2;
}

/*
    TODO: Task 1.3: Write a function called `is_downregulated` that tells whether a gene is downregulated or not given a fold change.
    Choose the correct return and input parameter type.

    Rules:
    - fold_change <= 0.5 → return true
    - otherwise → return false
*/
bool is_downregulated(double fold_change) {
    return fold_change <= 0.5;
}

/*
    TODO: Task 2: write a function reading from a file line by line, given its path.

    The function should read the file line by line and return a vector of strings.
*/
vector<string> read_file(const string& filename) {
    vector<string> lines;
    
    ifstream file(filename);
    if (!file.is_open()) {
        cout << "Error opening file\n";
        return lines;
    }

    string line;
    getline(file, line); // skip header

    while (getline(file, line)) {  
        lines.push_back(line);
    }
    file.close();
    return lines;
}

/*
    TODO: Task 3: Write a function that accepts a vector of strings and pretty-prints it assuming it's a CSV records (lines of comma-separated values) format.
*/
void pretty_print_csv(const vector<string>& lines) {
    for (const string& line : lines) {
        stringstream ss(line);
        string cell;
        while (getline(ss, cell, ',')) {
            cout << cell << " ";
        }
        cout << endl;
    }
}

/*
    TODO: Write a function `get_fold_status` returning the status for a given fold change (whether it's upregulated, downregulated or normal).
*/
string get_fold_status(double fold) {
    if (fold >= 2) {
        return "UPREGULATED";
    }
    if (fold <= 0.5) {
        return "DOWNREGULATED";
    }
    return "NORMAL";
}

/*
    TODO: Create a struct 'AnalysisResult' containing the gene name, fold change, and status.
*/
struct AnalysisResult {
    string gene;
    double fold_change;
    string status;
};

/*
    TODO: Write a function `get_analysis_results` returning a vector of `AnalysisResult` summarizing the data.

    The function should accept lines of CSV data and return a vector of `AnalysisResult`.
*/
vector<AnalysisResult> get_analysis_results(const vector<string>& lines) {
    vector<AnalysisResult> results;
    for (const string& line : lines) {

        string gene;
        string a_str, b_str;

        stringstream ss(line);

        getline(ss, gene, ',');
        getline(ss, a_str, ',');
        getline(ss, b_str, ',');

        double A = stod(a_str);
        double B = stod(b_str);

        double fold = fold_change(A, B);

        string status = get_fold_status(fold);

        AnalysisResult r;
        r.gene = gene;
        r.fold_change = fold;
        r.status = status;

        results.push_back(r);
    }
    return results;
}

int main() {
    vector<string> lines = read_file("data.csv");
    vector<AnalysisResult> results = get_analysis_results(lines);
    for (const AnalysisResult& result : results) {
        cout << result.gene << " " << result.fold_change << " " << result.status << endl;
    }
    return 0;
}
