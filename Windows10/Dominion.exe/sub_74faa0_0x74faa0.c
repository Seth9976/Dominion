// 函数: sub_74faa0
// 地址: 0x74faa0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void var_114
char eax_2
int32_t edx
eax_2, edx = memset(&var_114, 0, 0x104)
char* const edi = &data_801800
WPARAM eax_3 = sub_74cd80(eax_2, edx, *(data_19e2778 + 0x14), *arg1)

if (eax_3 == 0xffffffff)
    int32_t* lParam =
        sub_74afe0(eax_3, &data_801800, *arg1, &data_801800, &data_801800, &data_801800, 0x63)
    lParam[6] = 1
    SendMessageA(*(data_19e2778 + 0x14), 0x180, 0, lParam)

uint32_t eax_5 = arg1[5]

if (eax_5 u<= 0x63)
    eax_5 = zx.d(lookup_table_74fd04[eax_5])
    
    switch (eax_5)
        case 0
            edi = arg1[4]
        case 1
            uint32_t ecx_5 = zx.d(arg1[4].w)
            uint32_t var_120_2 = zx.d(*(arg1 + 0x12))
            uint32_t var_124_1 = ecx_5 u>> 8
            uint32_t var_128_1 = zx.d(ecx_5.b)
            eax_5 = sub_74afa0(&var_114, 0x104, "%d,%d,%d")
            edi = &var_114
        case 2
            eax_5 = sub_74cb60(arg1[4])
            edi = &data_1a9a490
        case 3
            sub_74cbe0(arg1[4])
            arg1[2] = &data_1a9ac18
            eax_5 = arg1[4]
            edi = *(eax_5 + 4)
        case 4
            edi = &data_8901e0
            eax_5 = &data_88ff00
            
            if (arg1[4] == 0)
                edi = &data_88ff00
        case 5
            int32_t ecx_8 = arg1[4]
            uint32_t var_120_3 = zx.d(ecx_8.b)
            uint32_t var_124_2 = zx.d((ecx_8 u>> 8).b)
            uint32_t var_128_2 = zx.d((ecx_8 u>> 0x10).b)
            uint32_t var_12c_2 = ecx_8 u>> 0x18
            eax_5 = sub_74afa0(&var_114, 0x104, "%d.%d.%d.%d")
            edi = &var_114
        case 6
            eax_5 = GetDateFormatA(0x400, 1, arg1[4], nullptr, &var_114, 0x104)
            edi = &var_114
        case 7
            eax_5 = GetTimeFormatA(0x400, 0, arg1[4], "hh':'mm':'ss tt", &var_114, 0x104)
            edi = &var_114
        case 8
            GetDateFormatA(0x400, 1, arg1[4], nullptr, &var_114, 0x104)
            int32_t __saved_esi
            void* edi_1 = &__saved_esi:3
            char i
            
            do
                i = *(edi_1 + 1)
                edi_1 += 1
            while (i != 0)
            
            void* ecx_10 = &var_114
            *edi_1 = 0x20
            
            do
                i = *ecx_10
                ecx_10 += 1
            while (i != 0)
            
            void var_113
            int32_t ecx_11 = ecx_10 - &var_113
            eax_5 = GetTimeFormatA(0x400, 0, arg1[4], "hh':'mm':'ss tt", &var_114 + ecx_11, 
                0x104 - ecx_11)
            edi = &var_114
        case 9
            CookieCheckFunction(0xfffffffe)
            return 0xfffffffe

int32_t* lParam_1 = sub_74afe0(eax_5, arg1[1], *arg1, edi, arg1[2], arg1[3], arg1[5])
LRESULT result = SendMessageA(*(data_19e2778 + 0x18), 0x180, 0, lParam_1)
CookieCheckFunction(result)
return result
