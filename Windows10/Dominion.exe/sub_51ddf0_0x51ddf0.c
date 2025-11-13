// 函数: sub_51ddf0
// 地址: 0x51ddf0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_30 = 0x8af
int32_t eax_1
int32_t edx
edx:eax_1 = mulu.dp.d(0x4c957f2d, arg4)
int32_t var_2c = 0
int32_t var_38 = eax_1 + 0x8af
int32_t ecx_2 = adc.d(0x5851f42d * arg4 + edx, 0, eax_1 u>= 0xfffff751)
int32_t var_34 = ecx_2
int32_t eax_4
int32_t* ecx_3
eax_4, ecx_3 = memset(&arg3[1], 0, 0x54)
*arg3 = arg4
void* var_4c = &arg3[1]
void* eax_5 = sub_51db30(eax_4, arg2, ecx_3)
int32_t eax_11
int32_t var_24
int32_t var_20

if (eax_5 != 1 || arg3[1] != eax_5)
    int32_t eax_12 = 0
    
    if (eax_5 s<= 0)
    label_51defe:
        var_24 = 1
        var_20 = 2
        int32_t var_1c_2 = 3
        int32_t eax_14
        int32_t edx_8
        eax_14, edx_8 = __allmul(eax_1 + 0x8af, ecx_2, 0x4c957f2d, 0x5851f42d)
        var_38 = eax_14 + 0x8af
        int32_t var_34_2 = adc.d(edx_8, 0, eax_14 u>= 0xfffff751)
        eax_11 = (&var_24)[
            ror.d(ecx_2 u>> 0xd ^ ((eax_1 + 0x8af) u>> 0x1b | ecx_2 << 5), (ecx_2 u>> 0x1b).b) u% 3]
    else
        while (true)
            if (arg3[1 + eax_12] == 1)
                var_20 = 4
                int32_t var_1c_3 = 5
                int32_t eax_24
                int32_t edx_16
                eax_24, edx_16 = __allmul(eax_1 + 0x8af, ecx_2, 0x4c957f2d, 0x5851f42d)
                int32_t var_c_1 = 0
                var_38 = eax_24 + 0x8af
                int32_t var_34_3 = adc.d(edx_16, 0, eax_24 u>= 0xfffff751)
                int32_t edx_20 = ((eax_1 + 0x8af) u>> 0x1b | ecx_2 << 5) ^ ecx_2 u>> 0xd
                uint32_t esi_13 = ecx_2 u>> 0x1b
                eax_11 = (&var_20)[(edx_20 << ((neg.d(esi_13)).b & 0x1f) | edx_20 u>> esi_13.b) & 1]
                break
            
            eax_12 += 1
            
            if (eax_12 s>= eax_5)
                int32_t eax_13 = 0
                
                while (arg3[1 + eax_13] != 3)
                    eax_13 += 1
                    
                    if (eax_13 s>= eax_5)
                        goto label_51defe
                
                eax_11 = 0
                break
else
    var_24 = 4
    var_20 = 5
    int32_t var_1c_1 = 6
    int32_t eax_6
    int32_t edx_2
    eax_6, edx_2 = __allmul(eax_1 + 0x8af, ecx_2, 0x4c957f2d, 0x5851f42d)
    var_38 = eax_6 + 0x8af
    int32_t var_34_1 = adc.d(edx_2, 0, eax_6 u>= 0xfffff751)
    eax_11 = (&var_24)[
        ror.d(ecx_2 u>> 0xd ^ ((eax_1 + 0x8af) u>> 0x1b | ecx_2 << 5), (ecx_2 u>> 0x1b).b) u% 3]
int32_t* var_4c_1 = arg3
arg3[3] = eax_11
sub_51cf60(&arg3[4], &arg3[1], &var_38, eax_5, &arg3[4], &arg3[6])
int32_t* result = arg3
int32_t esi_11 = 0
uint32_t* edi_1 = &result[0xc]
uint32_t eax_22

while (true)
    eax_22 = sub_51d200(&result[1], arg2, &var_38, esi_11, &result[1], eax_5)
    *edi_1 = eax_22
    
    if (eax_22 s<= 0)
        break
    
    result = arg3
    esi_11 += 1
    edi_1 = &edi_1[1]
    
    if (esi_11 s>= 0xa)
        return result

sub_63b870(eax_22, &data_801800, "retval.suggestedDoodads[i] > 0", 
    "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 0x2fd4, "MapParamsFromCampaign")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
