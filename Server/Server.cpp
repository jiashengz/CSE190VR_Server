// Server.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "rpc\server.h"
#include <string>
using std::string;

int main()
{

	rpc::server srv(8080);

	srv.bind("echo", [](string const& s) {
		return string("hello ") + s;
	});

	srv.run();
    return 0;
}

