#!/usr/bin/perl
if (!$::Driver) { use FindBin; exec("$FindBin::Bin/bootstrap.pl", @ARGV, $0); die; }
# DESCRIPTION: Verilator: Verilog Test driver/expect definition
#
# Copyright 2003 by Wilson Snyder. This program is free software; you can
# redistribute it and/or modify it under the terms of either the GNU
# Lesser General Public License Version 3 or the Perl Artistic License
# Version 2.0.

# This works with other vlt_alls, we we don't run it for them. It should
# fail with Verilator if --x-initial-edge is not specified.

scenarios(vlt_all => 1);

top_filename("t/t_initial_edge.v");

compile(
    );

execute(
    fails => 1,
    );

ok(1);
1;
