// Actel Corporation Proprietary and Confidential
// Copyright 2010 Actel Corporation.  All rights reserved.
// ANY USE OR REDISTRIBUTION IN PART OR IN WHOLE MUST BE HANDLED IN
// ACCORDANCE WITH THE ACTEL LICENSE AGREEMENT AND MUST BE APPROVED
// IN ADVANCE IN WRITING.
// Revision Information:
// 10Feb10		Production Release Version 3.1
// SVN Revision Information:
// SVN $Revision: 11955 $
// SVN $Date: 2010-01-30 15:35:13 -0800 (Sat, 30 Jan 2010) $
`timescale 1ns/1ps
module
CAHBLTO10
(
input
HCLK,
input
HRESETN,
input
CAHBLTI10,
output
reg
CAHBLTl10,
output
reg
CAHBLTOO1
)
;
localparam
CAHBLTIO1
=
1
'b
0
;
localparam
CAHBLTlO1
=
1
'b
1
;
reg
CAHBLTOI1
;
reg
CAHBLTII1
;
always
@(*)
begin
CAHBLTl10
=
1
'b
1
;
CAHBLTOO1
=
1
'b
0
;
case
(
CAHBLTII1
)
CAHBLTIO1
:
begin
if
(
CAHBLTI10
)
begin
CAHBLTl10
=
1
'b
0
;
CAHBLTOO1
=
1
'b
1
;
CAHBLTOI1
=
CAHBLTlO1
;
end
else
CAHBLTOI1
=
CAHBLTIO1
;
end
CAHBLTlO1
:
begin
CAHBLTOO1
=
1
'b
1
;
CAHBLTOI1
=
CAHBLTIO1
;
end
default
:
CAHBLTOI1
=
CAHBLTIO1
;
endcase
end
always
@
(
posedge
HCLK
or
negedge
HRESETN
)
begin
if
(
!
HRESETN
)
CAHBLTII1
<=
CAHBLTIO1
;
else
CAHBLTII1
<=
CAHBLTOI1
;
end
endmodule
