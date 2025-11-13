// 函数: sub_5defb0
// 地址: 0x5defb0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_4 = arg1
int32_t eax_1
char edx
edx:eax_1 = sx.q(arg2[0x23])
void* result = ((eax_1 + zx.d(edx)) s>> 8) - 1

if (result u> 0x14)
    sub_63b870(result, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 
        0x3fc9, "DomDeclareExpansion")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

void** eax_4
uint32_t eax_5
void** esi_1

switch (result)
    case nullptr, 1
        esi_1 = &data_8de7b0
        eax_4 = &data_8de7bc
    label_5defe5:
        
        if (*arg2 == 1)
            esi_1 = eax_4
        
        eax_5 = sub_64e7a0(arg1)
        return sub_665db0(eax_5, esi_1, eax_5, 0x3f800000, 0xffffffff, 0)
    case 2
        esi_1 = &data_8de7c8
        eax_4 = &data_8de7d4
        goto label_5defe5
    case 3
        esi_1 = &data_8de7e0
        eax_4 = &data_8de7ec
        goto label_5defe5
    case 4
        eax_5 = sub_64e7a0(arg1)
        return sub_665db0(eax_5, &data_8de7f8, eax_5, 0x3f800000, 0xffffffff, 0)
    case 5
        esi_1 = &data_8de804
        eax_4 = &data_8de810
        goto label_5defe5
    case 6
        esi_1 = &data_8de81c
        eax_4 = &data_8de828
        goto label_5defe5
    case 7
        esi_1 = &data_8de834
        eax_4 = &data_8de840
        goto label_5defe5
    case 8
        eax_5 = sub_64e7a0(arg1)
        return sub_665db0(eax_5, &data_8de84c, eax_5, 0x3f800000, 0xffffffff, 0)
    case 9
        esi_1 = &data_8de858
        eax_4 = &data_8de864
        goto label_5defe5
    case 0xa
        eax_5 = sub_64e7a0(arg1)
        return sub_665db0(eax_5, &data_8de870, eax_5, 0x3f800000, 0xffffffff, 0)
    case 0xb
        eax_5 = sub_64e7a0(arg1)
        return sub_665db0(eax_5, &data_8de87c, eax_5, 0x3f800000, 0xffffffff, 0)
    case 0xc
        eax_5 = sub_64e7a0(arg1)
        return sub_665db0(eax_5, &data_8de888, eax_5, 0x3f800000, 0xffffffff, 0)
    case 0xd
        eax_5 = sub_64e7a0(arg1)
        return sub_665db0(eax_5, &data_8de894, eax_5, 0x3f800000, 0xffffffff, 0)
    case 0xe
        eax_5 = sub_64e7a0(arg1)
        return sub_665db0(eax_5, &data_8de8a0, eax_5, 0x3f800000, 0xffffffff, 0)
    case 0xf
        eax_5 = sub_64e7a0(arg1)
        return sub_665db0(eax_5, &data_8de8ac, eax_5, 0x3f800000, 0xffffffff, 0)
    case 0x10
        eax_5 = sub_64e7a0(arg1)
        return sub_665db0(eax_5, &data_8de8b8, eax_5, 0x3f800000, 0xffffffff, 0)
    case 0x11
        eax_5 = sub_64e7a0(arg1)
        return sub_665db0(eax_5, &data_8de8c4, eax_5, 0x3f800000, 0xffffffff, 0)
    case 0x12
        eax_5 = sub_64e7a0(arg1)
        return sub_665db0(eax_5, &data_8de8d0, eax_5, 0x3f800000, 0xffffffff, 0)
    case 0x13
        eax_5 = sub_64e7a0(arg1)
        return sub_665db0(eax_5, &data_8de8dc, eax_5, 0x3f800000, 0xffffffff, 0)
    case 0x14
        return result
