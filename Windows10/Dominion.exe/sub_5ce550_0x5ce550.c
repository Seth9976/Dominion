// 函数: sub_5ce550
// 地址: 0x5ce550
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie

if (arg1 - 1 u<= 0x47)
    void* eax_3 = sub_5cc410(arg1 - 1, 0xffffffff, arg1, 0, 0)
    
    if (eax_3 != 0)
        sub_5cb5a0(eax_3)

uint32_t result = sub_637730(&data_b809e0)
*(result + 0x2c) = 3
*(result + 0x58) = 0xffffffff
*(result + 0x30) = arg2
*(result + 0x5c) = arg1
*(result + 0x70) = 0
*(result + 0x74) = 0
int32_t var_e4
char const* const var_e0
char* ecx_1

if (arg1 != 0x3f1)
    if (arg1 == 0x3e9 || arg1 != 0)
        void var_b0
        memset(&var_b0, 0, 0x40)
        int32_t var_c8 = arg1
        int32_t var_c4 = 0xffffffff
        int32_t var_c0 = 0
        int32_t var_b4 = 0
        uint32_t result_1 = result
        int128_t var_6c = 6.o
        int128_t var_5c = 0.o
        int128_t var_ac
        int128_t var_4c = var_ac
        int128_t var_9c
        int128_t var_3c = var_9c
        int128_t var_8c
        int128_t var_2c = var_8c
        int128_t var_7c
        int128_t var_1c = var_7c
        sub_5cb630(result + 0x258, &var_6c)
        CookieCheckFunction(result)
        return result
    
    var_e0 = "DomLocSet"
    var_e4 = 0xa6d
    ecx_1 = "where != CW_NONE"
else
    var_e0 = "DomCreatePile_Board"
    var_e4 = 0x117e
    ecx_1 = "where != CW_PLAYER_AREA"

sub_63b870(result, &data_801800, ecx_1, "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", var_e4, 
    var_e0)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
