// 函数: sub_66d010
// 地址: 0x66d010
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char* const esi = &data_801800
char* eax_1 = *arg2

if (eax_1 != 0)
    esi = eax_1

void* edi = arg1
char* const eax_2 = &data_801800
int32_t result

while (true)
    arg1.b = *esi
    char temp0_1 = *eax_2
    bool c_1 = arg1.b u< temp0_1
    
    if (arg1.b == temp0_1)
        if (arg1.b == 0)
            result = 0
            break
        
        arg1.b = esi[1]
        char temp1_1 = eax_2[1]
        c_1 = arg1.b u< temp1_1
        
        if (arg1.b == temp1_1)
            esi = &esi[2]
            eax_2 = &eax_2[2]
            
            if (arg1.b != 0)
                continue
            
            result = 0
            break
    
    result = sbb.d(eax_2, eax_2, c_1) | 1
    break

if (result == 0)
    return result

int32_t* eax_4 = sub_64cc90(edi)
char const (** ecx_1)[0xa] = &data_8cae70
int32_t* edi_1 = sub_6dd1e0(eax_4, eax_4, &data_8cae70, data_1724a80, 0x69)

if (edi_1 == 0)
    int128_t var_20
    int32_t* eax_9
    int32_t edx_3
    edx_3:eax_9 = &var_20
    var_20 = zx.o(0)
    ecx_1 = &data_8cae70
    edi_1 = sub_6dd1e0(sub_6dcc50(eax_9, eax_4, &data_8cae70, 0x69, eax_9, edx_3), eax_4, 
        &data_8cae70, data_1724a80, 0x69)
else
    int32_t esi_2 = 0
    
    if (edi_1[2] s> 0)
        char const (*** edi_2)[0xa] = *edi_1
        char* edx_2 = *arg2
        char* var_24_1 = edx_2
        
        while (true)
            ecx_1 = *edi_2
            char* const eax_6 = &data_801800
            
            if (edx_2 != 0)
                eax_6 = edx_2
            
            while (true)
                edx_2.b = *ecx_1
                char temp2_1 = *eax_6
                bool c_2 = edx_2.b u< temp2_1
                
                if (edx_2.b == temp2_1)
                    if (edx_2.b == 0)
                        result = 0
                        break
                    
                    edx_2.b = *(ecx_1 + 1)
                    char temp3_1 = eax_6[1]
                    c_2 = edx_2.b u< temp3_1
                    
                    if (edx_2.b == temp3_1)
                        ecx_1 += 2
                        eax_6 = &eax_6[2]
                        
                        if (edx_2.b != 0)
                            continue
                        
                        result = 0
                        break
                
                result = sbb.d(eax_6, eax_6, c_2) | 1
                break
            
            if (result == 0)
                return result
            
            esi_2 += 1
            edx_2 = var_24_1
            edi_2 = &edi_2[0xc]
            
            if (esi_2 s>= edi_1[2])
                break
        
        edi_1 = edi_1

int32_t var_44_2 = edi_1[2]
char const (** var_48_4)[0xa] = ecx_1
int32_t* eax_11 = sub_69dd00(data_1724a80, 0)
sub_6fb630(eax_11, eax_11, edi_1, var_44_2)
void* edi_4 = *edi_1 + edi_1[2] * 0x30
char* const ecx_6 = &data_801800
char* eax_14 = *arg2

if (eax_14 != 0)
    ecx_6 = eax_14

char* const esi_3 = ecx_6
void* ecx_7 = &esi_3[1]

do
    eax_14.b = *esi_3
    esi_3 = &esi_3[1]
while (eax_14.b != 0)

int32_t eax_15 = sub_687730(esi_3 - ecx_7 + 1)
*(edi_4 - 0x30) = eax_15
return memcpy(eax_15, ecx_6, esi_3 - ecx_7 + 1)
