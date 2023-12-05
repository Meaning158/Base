#pragma once
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stack>
#include <functional>
#include <set>
#include <queue>
#include <string>
#include <memory>
#include <map>
#include <iomanip>
#include <sstream>
#include <cassert>

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::map;
using std::set;
using std::vector;

struct table {
    string name = "";
    vector<string> columns = {};
    vector<vector<string>> rows = {};
};
