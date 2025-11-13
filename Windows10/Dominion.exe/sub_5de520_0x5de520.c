// 函数: sub_5de520
// 地址: 0x5de520
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_40 = *(arg3 + 0x1ba0)
void var_28
int128_t* eax_2 = sub_5d77e0(&var_28, arg2, arg3, &var_28)
int128_t* result = arg4
bool cond:0 = var_40 == 0
*result = *eax_2
result[1] = eax_2[1]
float xmm0_2 = *(arg3 + 0x1bd4)
float xmm0_3 = *(arg3 + 0x1bd8)
int32_t var_58_3
char const* const ecx_10

if (cond:0)
label_5de830:
    int32_t xmm1_6 = *(result + 0x14)
    
    if (xmm1_6 f>= -100000f)
        if (not(100000f f< xmm1_6))
            return result
        
        char const* const var_54_5 = "CurrentTransformWithMouseover"
        var_58_3 = 0x3d12
        ecx_10 = "t.t.x <= 100000.0f"
    else
        char const* const var_54_4 = "CurrentTransformWithMouseover"
        var_58_3 = 0x3d11
        ecx_10 = "t.t.x >= -100000.0f"
else
    float xmm0_4 = *(arg3 + 0x1bd0)
    float var_44_1 = xmm0_4
    int32_t edi
    int32_t ecx
    
    if (data_b80b4c != 2 || *(arg3 + 0x2c) != 0)
        ecx = *(arg3 + 0x2c)
    label_5de5ea:
        
        if (*(arg3 + 0x1c28) != data_b7d434)
            var_44_1 = xmm0_4
        else if (*(arg3 + 0x1a18) != 0)
            float xmm3_2 = *(arg3 + 0x1a24) - 0f
            
            if (not(0 f>= xmm3_2))
                if (xmm3_2 < 1f)
                    xmm0_4 = sub_4ae110(1, xmm3_2, xmm0_4, (zx.o(0)).d)
                    ecx = *(arg3 + 0x2c)
                    var_44_1 = xmm0_4
                else
                    var_44_1 = 0f
        else
            var_44_1 = (zx.o(0)).d
        
        edi = 0
        
        if (ecx == 0)
            goto label_5de640
    else
        ecx = *(arg3 + 0x2c)
        
        if (*(arg3 + 0xa4) != 0x3e9 || data_b80b08 == 0x2b)
            goto label_5de5ea
        
        int32_t eax_3
        eax_3.b = *(arg3 + 0x98) == data_b80b50
        
        if (eax_3.b == 0)
            goto label_5de5ea
        
        edi = 0
        var_44_1 = 1f
    label_5de640:
        int32_t ecx_1 = *(arg3 + 0xa4)
        
        if (ecx_1 - 7 u<= 0xb)
            edi = 2
        else if (ecx_1 - 0x13 u<= 0x13)
            edi = 1
    eax_2 = sub_5ddda0(arg3)
    
    if (eax_2 u<= 4)
        int32_t var_30
        int32_t eax_7
        int32_t xmm0_6
        int32_t xmm1_2
        
        switch (eax_2)
            case nullptr
                result = arg4
            case 1
                int32_t var_2c_2 = 0
                int32_t ecx_6 = var_40
                var_30 = 0
                eax_7 = sub_66b2b0(0, "itemCard", ecx_6, 0)
                
                if (eax_7 != 0)
                    goto label_5de6b3
                
                xmm0_6 = 0
                xmm1_2 = 0
                goto label_5de6d3
            case 2
                int32_t ecx_3 = var_40
                int32_t var_2c_1 = 0
                var_30 = 0
                eax_7 = sub_66b2b0(0, "itemCard", ecx_3, 0)
                
                if (eax_7 != 0)
                label_5de6b3:
                    uint32_t eax_8 = sub_64e7a0(eax_7)
                    xmm0_6 = *(eax_8 + 0x16cc)
                    xmm1_2 = *(eax_8 + 0x16d0)
                    goto label_5de6d3
                
                xmm0_6 = 0
                xmm1_2 = 0
            label_5de6d3:
                result = arg4
                var_40 = xmm0_6
                int32_t var_3c_1 = xmm1_2
                eax_2 = sub_5dd950(&var_28, &var_40, result, var_44_1, &var_28, &var_30, xmm0_2, 
                    xmm0_3, edi)
                int128_t xmm1_3 = eax_2[1]
                *result = *eax_2
                result[1] = xmm1_3
            case 3, 4
                int32_t var_2c_3 = 0
                int32_t ecx_7 = var_40
                var_30 = 0
                int32_t eax_10 = sub_66b2b0(0, "itemCard", ecx_7, 0)
                int32_t xmm0_10
                int32_t xmm1_4
                
                if (eax_10 != 0)
                    uint32_t eax_11 = sub_64e7a0(eax_10)
                    xmm0_10 = *(eax_11 + 0x16cc)
                    xmm1_4 = *(eax_11 + 0x16d0)
                else
                    xmm0_10 = 0
                    xmm1_4 = 0
                
                result = arg4
                var_40 = xmm0_10
                int32_t var_3c_2 = xmm1_4
                eax_2 = sub_5dd950(&var_28, &var_40, result, var_44_1, &var_28, &var_30, xmm0_2, 
                    xmm0_3, edi)
                int128_t xmm1_5 = eax_2[1]
                *result = *eax_2
                result[1] = xmm1_5
                *(result + 4) = data_800248
        
        goto label_5de830
    
    char const* const var_54_3 = "CurrentTransformWithMouseover"
    var_58_3 = 0x3d0c
    ecx_10 = "Halt"

sub_63b870(eax_2, &data_801800, ecx_10, "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", var_58_3, 
    "CurrentTransformWithMouseover")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
