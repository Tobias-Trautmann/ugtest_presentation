BOOST_AUTO_TEST_CASE(require){
    BOOST_MESSAGE("showcasing require");
    BOOST_REQUIRE();
    BOOST_REQUIRE(false);
    BOOST_MESSAGE("this is unreachable");
}