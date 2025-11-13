// 函数: sub_75ee50
// 地址: 0x75ee50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

*arg1 = &data_77e9ec
sub_7607a0(&arg1[0x1a])
sub_7607a0(&arg1[0x26])
sub_7607a0(&arg1[0x32])
sub_7607a0(&arg1[0x3e])
sub_7607a0(&arg1[0x4a])
arg1[2] = 0
arg1[4] = 0
arg1[5] = 0
__builtin_memcpy(&arg1[6], 
    "\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x"
"00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f", 
    0x24)
__builtin_memcpy(&arg1[0x10], 
    "\x00\x44\x2c\x47\x00\x44\x2c\x47\x01\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f", 0x14)
*(arg1 + 0x58) = zx.o(0)
__builtin_memset(&arg1[0x56], 0, 0x28)
arg1[0x60] = 0xffffffff
arg1[3] = 0
__builtin_memset(&arg1[0x61], 0, 0x3c)
arg1[0xf] = 0
return arg1
