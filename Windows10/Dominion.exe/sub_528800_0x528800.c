// 函数: sub_528800
// 地址: 0x528800
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4 = ebp
uint32_t var_10 = __chkstk(0x1978)
void* eax
int32_t ecx_1
eax, ecx_1 = sub_573400()
int32_t var_1c = ecx_1
int32_t var_20 = 0
int32_t eax_1 = *(eax + 0xc)
uint32_t result
int32_t edx
result, edx = sub_568960(eax_1, 0, 0x3ea, 0)

if (result s< 5)
    return result

void arg_58
void arg_ce0
__builtin_memcpy(&arg_58, sub_568780(&arg_ce0, edx, 0x3ea, &arg_ce0), 0xc84)

if (arg2 != 0)
    void* eax_4 = sub_573400()
    sub_579560(eax_4, &arg_58, *(eax_4 + 4), 0x3ea, *(eax_4 + 0x28), *(eax_4 + 0x2c), 
        *(eax_4 + 0x30), 0x3ee, &data_7bfad0, 0)

int32_t arg_4 = 0
int32_t var_8_1 = 0x11
int32_t var_1c_3 = __builtin_memcpy(&arg_ce0, &arg_58, 0xc84)
var_4.q = 0
int64_t arg_c
__builtin_memset(&arg_c, 0, 0x1c)
int32_t var_20_2 = 6
int128_t arg_28
int128_t* var_24_2 = &arg_28
uint32_t eax_6 = var_10
arg_28 = var_8_1.o
int128_t arg_38 = eax_1.o
int128_t arg_48 = arg1.o
uint32_t eax_7
char ecx_5
eax_7, ecx_5 = sub_563b20(eax_6, 0x17, &arg_ce0, *(eax_6 + 4), var_24_2, var_20_2)

if (eax_7 != 0)
    var_10 = eax_7
    void* eax_8 = sub_573400()
    void* var_1c_4 = nullptr
    void* var_20_3 = nullptr
    *(eax_8 + 0xc)
    int32_t var_24_3 = 0
    int32_t var_28_3 = 0
    void* var_3c
    __builtin_memcpy(&var_3c, 
        "\x01\x00\x00\x00\xee\x03\x00\x00\x0b\x00\x00\x00\x07\x00\x00\x00\x00", 0x11)
    *(eax_8 + 4)
    int32_t var_38
    int128_t* var_34_2
    int32_t var_30_2
    char var_2c_2
    ecx_5 = sub_582eb0(&var_10, var_3c, var_38, var_34_2, var_30_2, var_2c_2, var_28_3, var_24_3, 
        var_20_3, var_1c_4)

return sub_56a3f0(ecx_5, 0)
