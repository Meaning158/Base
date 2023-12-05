#include "function.h"
#include "Header.h"

static vector<table> tables = {};

table createTable()
{
    int columns;
    string name;
    cin >> name;
    cout << "enter the number of columns";
    cin >> columns;
    vector<string> v(columns);
    for (int i = 0; i < columns; i++) {
        string a;
        cin >> a;
        v[i] = a;
    }

    tables.push_back(table{ name, v, {} });
    return tables.back();

}