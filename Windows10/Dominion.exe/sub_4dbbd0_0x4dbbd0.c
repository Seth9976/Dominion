// 函数: sub_4dbbd0
// 地址: 0x4dbbd0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* edx = arg3
int32_t* var_8 = edx
int32_t eax = *edx
void* result = eax - 1
int32_t var_20
char const* const ecx

if (eax == 1)
    void* ebx_11 = edx[1]
    
    if (ebx_11 != 0)
        result = ebx_11 - 0x200
        
        if (result u< 0x100)
            return result
        
        int32_t edi_7 = 0
        
        if (arg4 s<= 0)
        label_4dbe87:
            edx[1] = 0
            *edx = 0
            return result
        
        while (true)
            result = sub_4db7a0(*(arg2 + (edi_7 << 2)), ebx_11)
            
            if (result.b != 0)
                if (var_8[1] != 0)
                    break
                
                *var_8 = 0
                return result
            
            edi_7 += 1
            
            if (edi_7 s>= arg4)
                edx = var_8
                goto label_4dbe87
        
        return result
    
    char const* const var_1c_2 = "DomValidateEntryOwnership"
    var_20 = 0x4aa
    ecx = "entry.what != CARD_NONE"
else
    if (result == 1)
        int32_t edi_6 = 0
        
        if (arg4 s<= 0)
        label_4dbc5a:
            result.b = 0
        else
            while (sub_4db700(*(arg2 + (edi_6 << 2)), edx[2]).b == 0)
                edx = var_8
                edi_6 += 1
                
                if (edi_6 s>= arg4)
                    goto label_4dbc5a
            
        label_4dbe4c:
            result.b = 1
        
        if (result.b != 0)
            return result
        
        *var_8 = 0
        return result
    
    void* temp2_1 = result - 1
    result -= 2
    
    if (temp2_1 == 1)
        int32_t ecx_1 = edx[3]
        result = edx[2]
        
        if (ecx_1 u> 0 || (ecx_1 u>= 0 && result u> 0x10000000))
            if (result == 0x20000000 && ecx_1 == 0)
                int32_t edi_4 = 0
                
                if (arg4 s<= 0)
                    goto label_4dbc5a
                
                while (sub_4db700(*(arg2 + (edi_4 << 2)), 0xc).b == 0)
                    edi_4 += 1
                    
                    if (edi_4 s>= arg4)
                        goto label_4dbc5a
                
                goto label_4dbe4c
            
            if (result == 0 && ecx_1 == 0x100)
                int32_t edi_5 = 0
                
                if (arg4 s<= 0)
                    goto label_4dbc5a
                
                while (sub_4db700(*(arg2 + (edi_5 << 2)), 0x11).b == 0)
                    edi_5 += 1
                    
                    if (edi_5 s>= arg4)
                        goto label_4dbc5a
                
                goto label_4dbe4c
        else
            if (result == 0x10000000 && ecx_1 == 0)
                int32_t edi_1 = 0
                
                if (arg4 s<= 0)
                    goto label_4dbc5a
                
                while (sub_4db700(*(arg2 + (edi_1 << 2)), 0xf).b == 0)
                    edi_1 += 1
                    
                    if (edi_1 s>= arg4)
                        goto label_4dbc5a
                
                goto label_4dbe4c
            
            if (result == 0x400 && ecx_1 == 0)
                int32_t ebx_2 = 0
                
                if (arg4 s<= 0)
                    *edx = 0
                    return result
                
                while (true)
                    result = sub_4db700(*(arg2 + (ebx_2 << 2)), 0xb)
                    
                    if (result.b != 0)
                        break
                    
                    ebx_2 += 1
                    
                    if (ebx_2 s>= arg4)
                        int32_t ebx_3 = 0
                        
                        while (true)
                            result = sub_4db700(*(arg2 + (ebx_3 << 2)), 0xc)
                            
                            if (result.b != 0)
                                break
                            
                            ebx_3 += 1
                            
                            if (ebx_3 s>= arg4)
                                int32_t ebx_4 = 0
                                
                                while (true)
                                    result = sub_4db700(*(arg2 + (ebx_4 << 2)), 0xf)
                                    
                                    if (result.b != 0)
                                        break
                                    
                                    ebx_4 += 1
                                    
                                    if (ebx_4 s>= arg4)
                                        int32_t ebx_5 = 0
                                        
                                        while (true)
                                            result = sub_4db700(*(arg2 + (ebx_5 << 2)), 0x12)
                                            
                                            if (result.b != 0)
                                                break
                                            
                                            ebx_5 += 1
                                            
                                            if (ebx_5 s>= arg4)
                                                int32_t ebx_6 = 0
                                                
                                                while (true)
                                                    result =
                                                        sub_4db700(*(arg2 + (ebx_6 << 2)), 0x11)
                                                    
                                                    if (result.b != 0)
                                                        break
                                                    
                                                    ebx_6 += 1
                                                    
                                                    if (ebx_6 s>= arg4)
                                                        *var_8 = 0
                                                        return result
                                                
                                                break
                                        
                                        break
                                
                                break
                        
                        break
                
                return result
            
            if (result == 0x8000000 && ecx_1 == 0)
                int32_t edi_3 = 0
                
                if (arg4 s<= 0)
                    goto label_4dbc5a
                
                while (sub_4db700(*(arg2 + (edi_3 << 2)), 0xe).b == 0)
                    edi_3 += 1
                    
                    if (edi_3 s>= arg4)
                        goto label_4dbc5a
                
                goto label_4dbe4c
        
        char const* const var_1c_1 = "DomValidateEntryOwnership"
        var_20 = 0x4d1
        ecx = "Halt"
    else
        char const* const var_1c = "DomValidateEntryOwnership"
        var_20 = 0x4d5
        ecx = "Halt"

sub_63b870(result, &data_801800, ecx, "C:\x\ax2017\Jams\Shared\TggGame\code\GameShared.cpp", 
    var_20, "DomValidateEntryOwnership")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
