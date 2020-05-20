BOOST_AUTO_TEST_SUITE(fixtureshowsuite)
    BOOST_AUTO_TEST_CASE(fixtureshowcase, somestruct){
        //Fixture constructor called
        //Your test stuff
        //Fixture deconstructor called
    }
BOOST_AUTO_TEST_SUITE_END()

BOOST_FIXTURE_TEST_SUITE(fixtresuite, somestruct)
    BOOST_AUTO_TEST_CASE(descriptivename){
        //Fixture constructor & deconstructor called
    }

    BOOST_AUTO_TEST_CASE(descriptivename2){
        //Fixture constructor & deconstructor called
    }
BOOST_FIXTURE_TEST_SUITE_END()