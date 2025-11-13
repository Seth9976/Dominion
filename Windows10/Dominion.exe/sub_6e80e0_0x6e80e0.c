// 函数: sub_6e80e0
// 地址: 0x6e80e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_c = arg3
int32_t ebx = 0
void* var_8 = nullptr
int32_t esi = 0
int32_t eax = arg2[2]
int32_t edx = eax << 2

if (eax s> 0)
    do
        void* eax_1 = sub_6e7db0(eax, arg2, arg3, esi, arg5)
        
        if (esi == 0 || var_8 != eax_1)
            var_8 = eax_1
            ebx += 1
        
        eax = arg2[2]
        esi += 1
        arg3 = var_c
    while (esi s< eax)

int32_t* esi_1 = arg4
uint32_t count = ebx * 6
void* result

if (count s>= edx)
    uint32_t count_1 = eax << 2
    esi_1[2] = count_1
    
    if (count_1 != 0)
        void* result_2 = sub_687730(count_1)
        memset(result_2, 0, count_1)
        result = result_2
    else
        result = nullptr
    
    int32_t i = 0
    *esi_1 = result
    esi_1[3] = 2
    
    if (arg2[2] s> 0)
        do
            int32_t eax_8 = *esi_1
            result = sub_6e7db0(eax_8, arg2, var_c, i, arg5)
            *(eax_8 + (i << 2)) = result
            i += 1
            esi_1 = arg4
        while (i s< arg2[2])
else
    esi_1[2] = count
    int32_t var_8_1
    int32_t ecx
    
    if (count != 0)
        int32_t eax_2 = sub_687730(count)
        var_8_1 = eax_2
        memset(eax_2, 0, count)
        ecx = var_8_1
    else
        ecx = 0
        var_8_1 = 0
    
    *esi_1 = ecx
    esi_1[3] = 4
    int32_t ebx_2 = 0
    void* result_1 = nullptr
    int32_t eax_6 = count s/ 6
    result = arg2[2]
    int32_t var_2c_2
    char const* const ecx_2
    
    if (result s>= 0xffff)
        char const* const var_28_3 = "FlanimCompressConstantInt"
        var_2c_2 = 0x5f2
        ecx_2 = "pMayaVertex->mFrameCount < MAXUINT16"
    label_6e8274:
        sub_63b870(result, &data_801800, ecx_2, "C:\x\ax2017\Engine\Flanim.cpp", var_2c_2, 
            "FlanimCompressConstantInt")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    int32_t i_1 = 0
    
    if (result s> 0)
        do
            result = sub_6e7db0(result, arg2, var_c, i_1, arg5)
            
            if (i_1 == 0 || result_1 != result)
                result_1 = result
                *(ecx + (eax_6 << 2) + (ebx_2 << 1)) = i_1.w
                *(var_8_1 + (ebx_2 << 2)) = result
                ebx_2 += 1
            
            i_1 += 1
        while (i_1 s< arg2[2])
    
    if (ebx_2 != eax_6)
        char const* const var_28_7 = "FlanimCompressConstantInt"
        var_2c_2 = 0x601
        ecx_2 = "dataIndex == numValues"
        goto label_6e8274

return result
