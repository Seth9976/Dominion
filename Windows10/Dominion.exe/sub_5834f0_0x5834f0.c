// 函数: sub_5834f0
// 地址: 0x5834f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
uint32_t eax_2 = arg5
void* edi = arg3
uint32_t i_2 = zx.d(eax_2.w)
void* var_ca4 = edi
uint32_t i_1 = i_2
*arg4 = 0

if (i_2 u>= 0x320)
    eax_2 = sub_591930()

void* ebx_1 = i_2 * 0x64 + edi
uint32_t eax_3
int32_t edx_1
eax_3, edx_1 = sub_573890(eax_2, *(ebx_1 + 0x1a4c), edi, 0, 0xffffffff, 0xffffffff)
bool cond:0 = i_1 u< 0x320
arg4[0xe] = eax_3
arg4[0xf] = edx_1

if (not(cond:0))
    eax_3, edx_1 = sub_591930()

uint32_t eax_4 = sub_583f70(eax_3, edx_1, edi, 0xc00, *(ebx_1 + 0x1a50))
bool cond:1 = i_1 u< 0x320
arg4[0xb] = eax_4

if (not(cond:1))
    eax_4 = sub_591930()

sub_576e90(eax_4, edi, &i_1, arg2, *(ebx_1 + 0x1a4c), 0)
*(ebx_1 + 0x1a60) = i_1
uint32_t i = 0
*(ebx_1 + 0x1a64) = 0
i_1 = 0
int32_t var_10

if (*(edi + 0xd38) s> 0)
    do
        if (i u>= 6)
            ___report_rangecheckfailure()
            noreturn
        
        *(&var_10 + i) = 0
        void* ecx_6 = &var_10 + i
        int16_t var_c94[0x642]
        int32_t edx_4 = sub_590990(i, i, edi, 0x462, &var_c94)
        int32_t esi_1 = 0
        int32_t var_ca0_1 = edx_4
        
        if (edx_4 s> 0)
            do
                uint32_t edi_1 = zx.d(var_c94[esi_1 * 2])
                
                if (edi_1 u>= 0x320)
                    sub_591930()
                    edx_4 = var_ca0_1
                
                int32_t ecx_8 = edi_1 * 0x64
                edi = var_ca4
                
                if (*(ecx_8 + edi + 0x1a4c) == *(ebx_1 + 0x1a4c))
                    if ((*(ecx_8 + edi + 0x1a6c) & 0x20) != 0)
                        *ecx_6 += 1
                    
                    if (i_1 == arg2)
                        *(ebx_1 + 0x1a64) += 1
                
                esi_1 += 1
            while (esi_1 s< edx_4)
        
        i = i_1 + 1
        i_1 = i
    while (i s< *(edi + 0xd38))

uint32_t result = arg4
void* edx_6 = arg2 * 0x5a30 + edi
*(result + 8) = *(edi + 0x19ec)
*(result + 0xc) = *(ebx_1 + 0x1a60)
int32_t eax_13 = sx.d(*(ebx_1 + 0x1a64))
*(result + 0x24) = *(edx_6 + 0x1750c)
int32_t ecx_10 = *(edx_6 + 0x17510)
*(result + 0x10) = eax_13
int32_t eax_14 = var_10
*(result + 0x28) = ecx_10
int32_t ecx_11 = *(edx_6 + 0x17504)
*(result + 0x14) = eax_14
int16_t var_c
eax_14.w = var_c
*(result + 0x1c) = ecx_11
*(result + 0x18) = eax_14.w
int32_t eax_15 = *(edx_6 + 0x17508)
*(result + 0x40) = arg6
*(result + 0x30) = arg2
*(result + 0x20) = eax_15
*(result + 0x44) = arg7
CookieCheckFunction(result)
return result
