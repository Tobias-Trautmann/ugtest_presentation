// left term of == is expanded in the logs
// check a % b == c has failed [13 % 2 != 12]
BOOST_CHECK(a % b == c);
// right term of == is not expanded in the logs
// check a == c % b has failed [13 != 0]
BOOST_CHECK(a == c % b);