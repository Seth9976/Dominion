// 函数: sub_735af0
// 地址: 0x735af0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* esi = arg4
int32_t eax = sub_6a9450(*(esi + 0x30))
int32_t edx = *(esi + 0x38)
int32_t var_34 = edx
int32_t eax_1 = arg3[1]
int32_t var_3c = eax_1
int32_t eax_2 = arg3[2]
int32_t var_38 = eax_2
int32_t var_30 = *(esi + 0x30)
int32_t var_40 = arg2[1] * edx + *arg2 * eax + *(esi + 0x3c)
sub_6a9de0(arg3, &var_40)
int32_t result_9 = *arg2
void* ebx_1 = esi + 0x38
int32_t eax_8
int32_t edx_2
edx_2:eax_8 = sx.q(*(esi + 0x50))
arg4 = ebx_1
int32_t result_3 = (eax_8 - edx_2) s>> 1
int32_t result_4 = result_3

if (result_3 s>= result_9)
    result_4 = result_9

void* edi_1 = &arg2[1]
void* var_c = edi_1
int32_t result_8 = divs.dp.d(sx.q(*ebx_1), eax) - result_9 - arg3[1]
int32_t result_6 = result_3

if (result_6 s>= result_8)
    result_6 = result_8

int32_t edx_6 = 0
int32_t result_7 = result_6
int32_t var_1c = 0
int32_t eax_15
int32_t* edi_4

if (result_4 s<= 0)
    edi_4 = arg2
else
    int32_t ecx_8 = eax_2
    
    while (true)
        void* eax_14 = nullptr
        arg4 = nullptr
        
        if (ecx_8 s> 0)
            while (true)
                void* edi_3 = *edi_1 + eax_14
                int32_t ebx_2 = *arg2
                eax_15 = sub_6a9450(*(esi + 0x30))
                
                if (eax_15 == 4)
                    int32_t* eax_19 = *(esi + 0x38) * edi_3 + (ebx_2 << 2) + *(esi + 0x3c)
                    eax_15 = sub_6a9450(*(esi + 0x30))
                    
                    if (eax_15 == 4)
                        edi_1 = &arg2[1]
                        *(*(esi + 0x38) * edi_3 + ((ebx_2 - var_1c) << 2) + *(esi + 0x3c) - 4) =
                            *eax_19
                        ecx_8 = eax_2
                        eax_14 = arg4 + 1
                        arg4 = eax_14
                        
                        if (eax_14 s< ecx_8)
                            continue
                        
                        edx_6 = var_1c
                        break
                
            label_735e8d:
                sub_63b870(eax_15, &data_801800, "atlasBytesPerPixel == 4", 
                    "C:\x\ax2017\Engine\Editor\AtlasMaker.cpp", 0x1be, "AtlasGetPixel")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
        
        edx_6 += 1
        var_1c = edx_6
        
        if (edx_6 s>= result_4)
            break
    
    edi_4 = arg2
    ebx_1 = esi + 0x38
    result_6 = result_7
    arg4 = ebx_1
    var_c = &edi_4[1]

int32_t edx_8 = 0
int32_t var_1c_1 = 0

if (result_6 s> 0)
    int32_t ecx_13 = eax_2
    
    while (true)
        void* eax_26 = nullptr
        arg4 = nullptr
        
        if (ecx_13 s> 0)
            do
                int32_t edi_6 = *edi_4 + arg3[1]
                void* ebx_5 = arg2[1] + eax_26
                eax_15 = sub_6a9450(*(esi + 0x30))
                
                if (eax_15 != 4)
                    goto label_735e8d
                
                int32_t* eax_31 = *(esi + 0x3c) - 4 + *(esi + 0x38) * ebx_5 + (edi_6 << 2)
                eax_15 = sub_6a9450(*(esi + 0x30))
                
                if (eax_15 != 4)
                    goto label_735e8d
                
                edi_4 = arg2
                *(*(esi + 0x38) * ebx_5 + ((var_1c_1 + edi_6) << 2) + *(esi + 0x3c)) = *eax_31
                ecx_13 = eax_2
                eax_26 = arg4 + 1
                arg4 = eax_26
            while (eax_26 s< ecx_13)
            
            edx_8 = var_1c_1
        
        edx_8 += 1
        var_1c_1 = edx_8
        
        if (edx_8 s>= result_7)
            break
        
        edi_4 = arg2
    
    ebx_1 = esi + 0x38
    arg4 = ebx_1
    var_c = &arg2[1]

void* edx_11 = var_c
int32_t result_10 = *edx_11
int32_t result_5 = result_10

if (result_3 s< result_10)
    result_5 = result_3

int32_t edi_8 = divs.dp.d(sx.q(*(esi + 0x34)), *ebx_1) - arg3[2]
int32_t var_14_2 = edi_8
int32_t* edi_9 = arg2
int32_t result = edi_8 - result_10

if (result_3 s< result)
    result = result_3

int32_t result_2 = result
int32_t var_24_1 = 0

if (result_5 s> 0)
    int32_t ecx_22 = eax_1
    int32_t eax_51
    
    do
        int32_t eax_44 = 0
        int32_t var_2c = 0
        
        if (ecx_22 s> 0)
            do
                int32_t edi_10 = *edx_11
                int32_t ecx_24 = *edi_9 + eax_44
                eax_15 = sub_6a9450(*(esi + 0x30))
                
                if (eax_15 != 4)
                    goto label_735e8d
                
                int32_t eax_46 = ecx_24 << 2
                int32_t* ebx_9 = *ebx_1 * edi_10 + eax_46 + *(esi + 0x3c)
                eax_15 = sub_6a9450(*(esi + 0x30))
                
                if (eax_15 != 4)
                    goto label_735e8d
                
                edx_11 = var_c
                ebx_1 = arg4
                *((edi_10 - var_24_1 - 1) * *arg4 + eax_46 + *(esi + 0x3c)) = *ebx_9
                ecx_22 = eax_1
                eax_44 = var_2c + 1
                edi_9 = arg2
                var_2c = eax_44
            while (eax_44 s< ecx_22)
        
        eax_51 = var_24_1 + 1
        var_24_1 = eax_51
    while (eax_51 s< result_5)
    edx_11 = &edi_9[1]
    arg4 = esi + 0x38
    result = result_2
    var_c = edx_11

int32_t ecx_28 = 0
int32_t var_24_2 = 0

if (result s> 0)
    int32_t ebx_10 = eax_1
    
    while (true)
        result = 0
        int32_t result_1 = 0
        
        if (ebx_10 s> 0)
            do
                int32_t edi_16 = *edi_9 + result
                int32_t ebx_12 = arg3[2] + *edx_11
                eax_15 = sub_6a9450(*(esi + 0x30))
                
                if (eax_15 != 4)
                    goto label_735e8d
                
                int32_t ecx_30 = edi_16 << 2
                int32_t* edi_20 = (ebx_12 - 1) * *arg4 + ecx_30 + *(esi + 0x3c)
                eax_15 = sub_6a9450(*(esi + 0x30))
                
                if (eax_15 != 4)
                    goto label_735e8d
                
                edi_9 = arg2
                *((var_24_2 + ebx_12) * *arg4 + ecx_30 + *(esi + 0x3c)) = *edi_20
                edx_11 = var_c
                result = result_1 + 1
                result_1 = result
            while (result s< eax_1)
            
            ecx_28 = var_24_2
            ebx_10 = eax_1
        
        ecx_28 += 1
        var_24_2 = ecx_28
        
        if (ecx_28 s>= result_2)
            break
        
        edx_11 = var_c

return result
