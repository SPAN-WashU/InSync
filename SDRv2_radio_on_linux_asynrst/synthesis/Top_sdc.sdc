# Top Level Design Parameters

# Clocks

create_clock -name {FAB_CLK} -period 20.833300 -waveform {0.000000 10.416600} SDR_MSS_0/MSS_CCC_0/I_MSSCCC:GLA
create_clock -name {FCLK} -period 20.833300 -waveform {0.000000 10.416600} SDR_MSS_0/MSS_CCC_0/I_MSSCCC:GLAMSS

# False Paths Between Clocks


# False Path Constraints


# Maximum Delay Constraints


# Multicycle Constraints


# Virtual Clocks
# Output Load Constraints
# Driving Cell Constraints
# Wire Loads
# set_wire_load_mode top

# Other Constraints
