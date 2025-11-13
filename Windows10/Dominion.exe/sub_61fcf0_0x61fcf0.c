// 函数: sub_61fcf0
// 地址: 0x61fcf0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = arg3
int32_t arg_8
int32_t edi = arg_8
int32_t ecx = *(arg2 + (edi << 2) + 0x50cc)

if (ecx != 0)
    int32_t* eax_1 = sub_51bce0(&var_8, &arg_8, ecx, &var_8)
    int32_t var_18_1 = arg_8
    sub_666250(eax_1, &data_bf0104, arg3)

void* result = sub_61dad0()
arg_8 = 0x3f800000
int32_t ecx_2 = *(result + 0x78)
result.b = data_171efcc

if (((ecx_2 != 4 && ecx_2 != 5) || result.b != 0) && edi == data_171efc8 && data_1724034 != 1)
    uint32_t eax_2 = sub_64e7a0(arg3)
    sub_665db0(eax_2, &data_bf00c8, eax_2, 0x3f800000, 0xffffffff, 0)
    result.b = data_171efcc

if (*arg4 != 0 && data_1724034 != 1)
    int32_t ecx_5 = arg4[1]
    
    if (ecx_5 == 3 || ecx_5 == 2)
        uint32_t eax_3 = sub_64e7a0(arg3)
        sub_665db0(eax_3, &data_bf0038, eax_3, 0x3f800000, 0xffffffff, 0)
        result.b = data_171efcc

int32_t ecx_8 = arg4[1]
int32_t var_18_2
uint32_t eax_4
void** edi_2

if (ecx_8 u> 5)
    char const* const var_14_3 = "DeclareMission"
    var_18_2 = 0xe242
else
    switch (ecx_8)
        case 0, 1
            if (result.b != 0)
                eax_4 = sub_64e7a0(arg3)
                return sub_665db0(eax_4, &data_bf002c, eax_4, arg_8, 0xffffffff, 0)
            
            edi_2 = &data_bf0020
        label_61fdf4:
            arg_8 = 0x3f800000
            eax_4 = sub_64e7a0(arg3)
            return sub_665db0(eax_4, edi_2, eax_4, arg_8, 0xffffffff, 0)
        case 2
            if (data_1724034 != 1)
                edi_2 = &data_bf002c
                goto label_61fdf4
            
            eax_4 = sub_64e7a0(arg3)
            return sub_665db0(eax_4, &data_bf0020, eax_4, arg_8, 0xffffffff, 0)
        case 3
            uint32_t eax_5 = sub_64e7a0(arg3)
            return sub_665db0(eax_5, &data_bf002c, eax_5, 0x3f800000, 0xffffffff, 0)
        case 4
            goto label_61fe7e
        case 5
            uint32_t eax_7 = sub_64e7a0(arg3)
            sub_665db0(eax_7, &data_bf0044, eax_7, 0x3f800000, 0xffffffff, 0)
        label_61fe7e:
            uint32_t eax_8 = sub_64e7a0(arg3)
            sub_665db0(eax_8, &data_bf0050, eax_8, 0x3f800000, 0xffffffff, 0)
            
            if (data_171efcc == 0)
                uint32_t eax_9 = sub_64e7a0(arg3)
                sub_665db0(eax_9, &data_bf005c, eax_9, 0x3f800000, 0xffffffff, 0)
            
            result = arg4[2] + 1
            
            if (result u> 4)
                char const* const var_14_2 = "DeclareMission"
                var_18_2 = 0xe23e
            else
                switch (result)
                    case nullptr
                        return result
                    case 1
                        uint32_t eax_13 = sub_64e7a0(arg3)
                        return sub_665db0(eax_13, &data_bf0074, eax_13, 0x3f800000, 0xffffffff, 0)
                    case 2
                        uint32_t eax_15 = sub_64e7a0(arg3)
                        return sub_665db0(eax_15, &data_bf0080, eax_15, 0x3f800000, 0xffffffff, 0)
                    case 3
                        uint32_t eax_17 = sub_64e7a0(arg3)
                        return sub_665db0(eax_17, &data_bf008c, eax_17, 0x3f800000, 0xffffffff, 0)
                    case 4
                        uint32_t eax_11 = sub_64e7a0(arg3)
                        return sub_665db0(eax_11, &data_bf0068, eax_11, 0x3f800000, 0xffffffff, 0)
sub_63b870(result, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", var_18_2, 
    "DeclareMission")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
