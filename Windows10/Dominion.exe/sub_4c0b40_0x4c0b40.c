// 函数: sub_4c0b40
// 地址: 0x4c0b40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t eax = sub_64e7a0(arg1)
*(eax + 0x18bc) = sub_4bfd90
void* result = sub_66b2b0(eax, "tblAvatar", arg1, 0xffffffff)
void* result_1 = result
void* result_2 = result_1

if (result_1 != 0)
    int32_t edi_1 = 0
    
    while (true)
        int32_t eax_3 = edi_1 + data_cc8dbc * 0x18
        int32_t var_28
        char const* const ecx_10
        
        if (eax_3 u>= 0x570)
            char const* const var_24_3 = "GameSpecific_ButtonIndexToAvatar"
            var_28 = 0xeab1
            ecx_10 = "idx < sizeof(AVATAR_DEFS)"
        else if (eax_3 s< 0)
            char const* const var_24_2 = "GameSpecific_ButtonIndexToAvatar"
            var_28 = 0xeab2
            ecx_10 = "idx >= 0"
        else
            int32_t eax_4 = eax_3 * 3
            int32_t esi_1 = *((eax_4 << 3) + &data_bf01d0)
            int32_t eax_5 = sub_66b2b0(eax_4, "tblAvatarItem", result_1, edi_1)
            
            if (eax_5 != 0)
                uint32_t eax_6
                void** edx_1
                
                if (esi_1 s<= 0x165)
                    void** eax_7 = sub_624450(esi_1)
                    eax_6 = sub_64e7a0(eax_5)
                    edx_1 = eax_7
                else
                    eax_6 = sub_64e7a0(eax_5)
                    edx_1 = &data_8dbd7c
                
                sub_665db0(eax_6, edx_1, eax_6, 0x3f800000, 0xffffffff, 0)
            
            result_1 = result_2
            edi_1 += 1
            
            if (edi_1 s>= 0x3a)
                break
            
            continue
        
        sub_63b870(eax_3, &data_801800, ecx_10, "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 
            var_28, "GameSpecific_ButtonIndexToAvatar")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    result = data_cc8dbc
    
    if (result == 0)
        uint32_t eax_8 = sub_64e7a0(arg1)
        sub_665db0(eax_8, &data_8dbd64, eax_8, 0x3f800000, 0xffffffff, 0)
        result = data_cc8dbc
    
    if (result == 2)
        uint32_t eax_9 = sub_64e7a0(arg1)
        return sub_665db0(eax_9, &data_8dbd70, eax_9, 0x3f800000, 0xffffffff, 0)

return result
