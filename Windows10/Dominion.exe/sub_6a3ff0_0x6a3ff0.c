// 函数: sub_6a3ff0
// 地址: 0x6a3ff0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ebx = arg2
int32_t* var_8 = ebx
int32_t eax = ebx[2]
ebx[2] = eax + 1
int32_t count = (eax + 1) * 0x18

if (eax != 0)
    int32_t ebx_1 = *ebx
    int32_t eax_2 = sub_687730(count)
    memset(eax_2, 0, count)
    *var_8 = eax_2
    memcpy(eax_2, ebx_1, var_8[2] * 0x18 + 0xffffffe8)
    
    if (ebx_1 != 0)
        _aligned_free(ebx_1)
    
    ebx = var_8
else
    int32_t eax_1 = sub_687730(count)
    memset(eax_1, 0, count)
    *ebx = eax_1

void* ebx_2 = arg4
int32_t ecx_5 = (ebx[2] - 1) * 0x18
int32_t* eax_7 = *ebx + ecx_5
int32_t* var_10 = eax_7
int32_t var_2c_2
char const* const ecx_6

if (ebx_2 != 0)
    eax_7 = *(arg3 + 0xc)
    
    if (eax_7[4] == 0x14)
        int32_t* esi_2 = *(ebx_2 + 4)
        int32_t ecx_7 = 0
        int32_t var_c = 0
        
        if (esi_2 != 0)
            while (true)
                int32_t* eax_9 = *esi_2
                int32_t edi_2 = ecx_7
                esi_2 = esi_2[1]
                char* const ecx_8 = &data_801800
                char* edx = *(arg3 + 4)
                char* eax_10 = *eax_9
                
                if (eax_10 != 0)
                    ecx_8 = eax_10
                
                int32_t eax_12
                
                while (true)
                    eax_10.b = *ecx_8
                    char temp0_1 = *edx
                    bool c_1 = eax_10.b u< temp0_1
                    
                    if (eax_10.b == temp0_1)
                        if (eax_10.b == 0)
                            eax_12 = 0
                            break
                        
                        eax_10.b = ecx_8[1]
                        char temp2_1 = edx[1]
                        c_1 = eax_10.b u< temp2_1
                        
                        if (eax_10.b == temp2_1)
                            ecx_8 = &ecx_8[2]
                            edx = &edx[2]
                            
                            if (eax_10.b != 0)
                                continue
                            
                            eax_12 = 0
                            break
                    
                    eax_12 = sbb.d(eax_10, eax_10, c_1) | 1
                    break
                
                ecx_7 = edi_2 + 1
                
                if (eax_12 != 0)
                    ecx_7 = edi_2
                
                if (esi_2 == 0)
                    break
            
            ebx_2 = arg4
            var_c = ecx_7
        
        int32_t ebx_5 = *(ebx_2 + 0xc) - ecx_7
        int32_t count_1 = ebx_5 << 4
        int32_t eax_13 = sub_687730(count_1)
        memset(eax_13, 0, count_1)
        *var_10 = ebx_5
        var_10[2] = eax_13
        var_10[4] = var_c
        void* ecx_11 = arg3
        int32_t* ebx_7 = *(arg4 + 4)
        void* result = *(ecx_11 + 0x1c)
        void* result_1 = result
        
        if (ebx_7 != 0)
            int32_t edi_4 = 0
            
            while (true)
                int32_t* esi_4 = *ebx_7
                ebx_7 = ebx_7[1]
                char* edx_2 = *(ecx_11 + 4)
                char* ecx_12 = *esi_4
                char* const eax_19 = &data_801800
                
                if (ecx_12 != 0)
                    eax_19 = ecx_12
                
                int32_t eax_21
                
                while (true)
                    ecx_12.b = *eax_19
                    char temp1_1 = *edx_2
                    bool c_2 = ecx_12.b u< temp1_1
                    
                    if (ecx_12.b == temp1_1)
                        if (ecx_12.b == 0)
                            eax_21 = 0
                            break
                        
                        ecx_12.b = eax_19[1]
                        char temp3_1 = edx_2[1]
                        c_2 = ecx_12.b u< temp3_1
                        
                        if (ecx_12.b == temp3_1)
                            eax_19 = &eax_19[2]
                            edx_2 = &edx_2[2]
                            
                            if (ecx_12.b != 0)
                                continue
                            
                            eax_21 = 0
                            break
                    
                    eax_21 = sbb.d(eax_19, eax_19, c_2) | 1
                    break
                
                if (eax_21 != 0)
                    int32_t* var_28_7 = esi_4
                    result = sub_6a3dc0(eax_21, *(*var_8 + ecx_5 + 8) + edi_4, result_1, ecx_12)
                    
                    if (result.b != 0)
                        edi_4 += 0x10
                    else
                        char* eax_23 = *esi_4
                        char* const ecx_14 = &data_801800
                        
                        if (eax_23 != 0)
                            ecx_14 = eax_23
                        
                        char* const var_28_8 = ecx_14
                        result = sub_63b5f0("unknown tag %s")
                else
                    result = sub_6a3ff0(arg3, esi_4[3])
                
                ecx_11 = arg3
                
                if (ebx_7 == 0)
                    break
        
        return result
    
    char const* const var_28_9 = "DefParseReadAttribTree"
    var_2c_2 = 0x33b
    ecx_6 = "pField->pDefMap->defType == DT_ATTRIB_TREE"
else
    char const* const var_28_4 = "DefParseReadAttribTree"
    var_2c_2 = 0x33a
    ecx_6 = "pParseTree"

sub_63b870(eax_7, &data_801800, ecx_6, "C:\x\ax2017\Engine\DefParseTree.cpp", var_2c_2, 
    "DefParseReadAttribTree")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
