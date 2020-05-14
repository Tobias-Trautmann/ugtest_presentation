typedef boost::mpl::list<int, long, unsigned char> test_types;

BOOST_AUTO_TEST_SUITE(templateshowsuite)
    BOOST_AUTO_TEST_CASE_TEMPLATE(templateshowcase, T, test_types)
    {
        //your super fancy template test
    }
BOOST_AUTO_TEST_SUITE_END()