#pragma once

#include "gtest/gtest.h"
#include "AccessToken.h"
#include <string>

class AccessTokenTest : public ::testing::Test
{
protected:
	std::string defaultUserName;
	std::string testAccessToken;

	// You can do set-up work for each test here.
	AccessTokenTest();

	// You can do clean-up work that doesn't throw exceptions here.
	virtual ~AccessTokenTest();

	// If the constructor and destructor are not enough for setting up
	// and cleaning up each test, you can define the following methods:

	// Code here will be called immediately after the constructor (right
	// before each test).
	virtual void SetUp();

	// Code here will be called immediately after each test (right
	// before the destructor).
	virtual void TearDown();
};
