
TEST_METHOD(PushBackTest_ValidData_Success)

{

//Arrange

List defaultList;

defaultList.pushBack(4);

defaultList.pushBack(5);

std::string actual = defaultList.toString();

//Act

std::stringstream expected;

std::string expected {4 5 };

std::string expectedString = expected.str();

//Assert

Assert::AreEqual (expectedString, actual);

}

TEST_METHOD(PushFrontTest_ValidData_Success)

{

//Arrange

List defaultList;

defaultList.pushBack(4);

defaultList.pushFront(5);

std::string actual = defaultList.toString();

//Act

std::stringstream expected;

std::string expected {4 5 };

std::string expectedString = expected.str();

//Assert

Assert::AreEqual(expectedString , actual);

}

TEST_METHOD(GetSizeTest_ValidData_Success)

{

//Arrange

List defaultList;

defaultList.pushBack(4);

defaultList.pushBack(56);

defaultList.pushBack(87);

int actual = defaultList.getSize();

//Act

int expected = 3;

//Assert

Assert::AreEqual(expected, actual);

}

TEST_METHOD(SquareBracketsOperatorTest_ValidData_Success)

{

//Arrange

List defaultList;

defaultList.pushBack(5);

defaultList.pushBack(64);

defaultList.pushBack(92);

int actual = defaultList[1];

//Act

int expected = 64;

//Assert

Assert::AreEqual(expected, actual);

}

TEST_METHOD(IsCollectionClearTest_ValidData_Success)

{

//Arrange

List defaultList;

//Act //Assert

Assert::IsTrue(defaultList.isCollectionClear());

}
