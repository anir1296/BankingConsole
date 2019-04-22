#pragma once

constexpr auto SQL_QUERY_SIZE = 1000; // Max. Num characters for SQL Query passed in
constexpr auto AUTH_FIELD_SIZE = 40; // Max. number characters for username/password for data source

#define MYSQLSUCCESS(rc) ((rc == SQL_SUCCESS) || (rc == SQL_SUCCESS_WITH_INFO) ) 