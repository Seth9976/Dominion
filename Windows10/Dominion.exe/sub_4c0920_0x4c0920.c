// 函数: sub_4c0920
// 地址: 0x4c0920
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t esi = arg1
void* edi = 4
int32_t var_28 = 0xffffffff
*(sub_64e7a0(esi) + 0x18bc) = sub_4c0290
void* eax_2 = *(data_cc8dc8 + 0x1e1a0)

if (eax_2 s< 4)
    edi = eax_2

void* eax_3
eax_3.b = edi s< 4
void* eax_4 = eax_3 + edi
sub_666120(eax_4, &data_8dbca4, esi, eax_4)
void* result = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
void* ebx = nullptr
void* result_1 = result

if (edi s> 0)
    void* edx_1 = nullptr
    void* edi_1 = &data_19e55e4
    void* var_c_1 = nullptr
    
    do
        int32_t* result_3
        int32_t* result_2
        
        if (*edi_1 == "tbl_profiles" && *(edi_1 - 4) == esi && *(edi_1 + 4) == ebx
                && *(edi_1 + 8) == 0)
            result_2 = *(edi_1 + 0x1c)
            result_3 = result_2
            
            if (result_2 == 0)
                goto label_4c09e9
            
            uint32_t eax_5 = zx.d(result_2.w)
            
            if (eax_5 u>= data_c23bac)
                goto label_4c09e9
            
            result = eax_5 * 0x18d0 + data_c23ba8
            
            if (*(result + 0x18c8) == result_2)
                goto label_4c0a17
            
            goto label_4c09e9
        
    label_4c09e9:
        result = sub_67be20(ebx)
        result_2 = result
        result_3 = result_2
        *(edi_1 + 0x1c) = result_2
        
        if (result_2 != 0)
            edx_1 = var_c_1
            *edi_1 = "tbl_profiles"
            *(edi_1 - 4) = esi
            *(edi_1 + 4) = ebx
            *(edi_1 + 8) = 0
        label_4c0a17:
            
            if (ebx s< 0)
            label_4c0b20:
                sub_63b870(result, &data_801800, "retval", 
                    "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp", 0x544, 
                    "GetProfileBySlot")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            result = data_cc8dc8
            
            if (ebx s>= *(result + 0x1e1a0))
                goto label_4c0b20
            
            void* esi_1 = edx_1 + result
            
            if (esi_1 == 0)
                goto label_4c0b20
            
            int32_t var_28_2 = 0xffffffff
            sub_666380(result, &data_8dbcb0, result_2, esi_1)
            void* eax_7 = sub_624450(*(esi_1 + 8))
            uint32_t eax_8 = sub_64e7a0(result_3)
            sub_665db0(eax_8, eax_7, eax_8, 0x3f800000, 0xffffffff, 0)
            result = result_1
            
            if (esi_1 == result)
                uint32_t eax_9 = sub_64e7a0(result_3)
                result = sub_665db0(eax_9, &data_8dbcbc, eax_9, 0x3f800000, 0xffffffff, 0)
            
            esi = arg1
        
        ebx += 1
        edx_1 = var_c_1 + 0x7868
        edi_1 += 0x24
        var_c_1 = edx_1
    while (ebx s< edi)

if (edi s< 4)
    result = sub_4bba60(edi * 0x24 + &data_19e55e0, esi, "tbl_profiles", edi)
    
    if (result != 0)
        uint32_t eax_11 = sub_64e7a0(result)
        return sub_665db0(eax_11, &data_8dbcc8, eax_11, 0x3f800000, 0xffffffff, 0)

return result
