# CMake generated Testfile for 
# Source directory: /home/alex/bmnroot_dev/bmnroot/macro/run
# Build directory: /home/alex/bmnroot_dev/bmnroot/build/macro/run
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(run_sim "/opt/fairsoft/install/bin/root" "-b" "-q" "-l" "/home/alex/bmnroot_dev/bmnroot/macro/run/run_sim_bmn.C")
set_tests_properties(run_sim PROPERTIES  PASS_REGULAR_EXPRESSION "Macro finished successfully." TIMEOUT "200")
add_test(run_reco "/opt/fairsoft/install/bin/root" "-b" "-q" "-l" "/home/alex/bmnroot_dev/bmnroot/macro/run/run_reco_bmn.C")
set_tests_properties(run_reco PROPERTIES  PASS_REGULAR_EXPRESSION "Macro finished successfully." TIMEOUT "200")
add_test(run_digi "/opt/fairsoft/install/bin/root" "-b" "-q" "-l" "/home/alex/bmnroot_dev/bmnroot/macro/run/run_reco_bmn.C(\"run6-1889:/nica/data4mpd1/dataBMN/bmndata3/run6/root/digi/bmn_run1889_digi.root\", \"$VMCWORKDIR/macro/run/bmndst_exp.root\", 0, 100)")
set_tests_properties(run_digi PROPERTIES  PASS_REGULAR_EXPRESSION "Macro finished successfully." TIMEOUT "200")
