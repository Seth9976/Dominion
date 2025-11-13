// 函数: sub_5ca510
// 地址: 0x5ca510
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int128_t var_58
__builtin_memcpy(&var_58, 
    "\x9a\x99\x19\x3f\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
"9a\x99\x19\x3f\x00\x00\x00\x00", 
    0x20)
*arg3 = arg6
arg3[2] = arg2
bool cond:0 = *(arg4 + 0xd38) s<= 2
int32_t var_84 = 0x46998800
int32_t var_80
__builtin_strncpy(&var_80, "|aR?", 4)
char var_60 = 0
int32_t var_7c = 0x38d1b717
int32_t var_78 = 0x1e
int32_t var_74 = 0
int32_t var_70 = 0x320
int32_t var_68 = 0
int32_t var_64 = 0
int32_t var_5c = 0
int32_t var_6c = 0x40800000
int32_t var_10 = 0
int16_t var_c = 0
char var_a = 0
int16_t var_8c = 0
int32_t var_88 = 0x4b
int32_t var_38 = 0

if (not(cond:0))
    int128_t var_48
    var_48.d = 0x3e800000
    var_48:8.d = 0

int32_t var_6c_1
int32_t var_5c_2

if (arg6 == 0)
    int32_t var_68_3 = 0x4b
    int32_t var_64_3 = 0x46
    int32_t var_70_3 = 0x50
    var_5c_2 = 0x3e800000
    var_6c_1 = 0
else if (arg6 == 1)
    int32_t var_68_2 = 0x3c
    int32_t var_64_2 = 0x32
    int32_t var_70_2 = 0x64
    var_5c_2 = 0x3e800000
    var_6c_1 = 0
else if (arg6 == 3)
    int32_t var_68_1 = 0x50
    int32_t var_64_1 = 0x50
    int32_t var_70_1 = 0x32
    int32_t var_5c_1 = 0x3e99999a
    var_c.b = 1
    int32_t var_10_1 = 0x14
    var_6c_1 = 0
sub_4f5450(arg5, &var_8c)
int32_t edi = sub_69f030("res/net/dominion.net2", 0x24)
int32_t eax_6 = sub_69f030("res/net/dominion_tiny.net2", 0x24)

if (arg6 == 0 || arg6 == 3)
    edi = eax_6

return sub_5b14c0(arg5, edi)
