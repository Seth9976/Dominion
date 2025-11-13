// 函数: sub_610fb0
// 地址: 0x610fb0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ebx = sub_5cb070()
void* result

if (ebx != 0)
    result = *(ebx + 0x10)
    
    if (result u> 0x17)
        result.b = 0
        return result
    
    bool cond:0_1
    
    switch (result)
        case nullptr, 1, 0xc, 0xe, 0x11, 0x12, 0x13, 0x14, 0x16
            result.b = 0
            return result
        case 2, 3, 4, 6
        label_611002:
            
            if (*(arg1 + 0x2c) != 0 || *(arg1 + 0xa4) != 0x3ea)
                result.b = 0
                return result
            
            cond:0_1 = sub_5cbb20(arg1) == *(ebx + 0x18)
            goto label_6110b8
        case 5
            if (*(arg1 + 0x2c) != 0)
                result.b = 0
                return result
            
            if (*(arg1 + 0xa4) != 0x3eb)
                goto label_611002
            
            if (sub_5cbb20(arg1) != *(ebx + 0x18))
                goto label_611002
        case 7
            if (*(arg1 + 0x2c) != 0)
                result.b = 0
                return result
            
            cond:0_1 = *(arg1 + 0xa4) == 0x3e9
            goto label_6110b8
        case 8, 9, 0x15
            if (*(arg1 + 0x2c) != 0)
                result.b = 0
                return result
            
            cond:0_1 = *(arg1 + 0xa4) == 0x3ea
        label_6110b8:
            
            if (not(cond:0_1))
                result.b = 0
                return result
        case 0xa, 0xb
            if (*(ebx + 0xc) == 0xb && data_b80b08 == 2)
                result = sub_610ef0(arg1, *(ebx + 0x18))
            
            if (*(ebx + 0xc) == 0xb && data_b80b08 == 2 && result.b != 0)
                result.b = 0
                return result
            
            if (*(arg1 + 0x2c) != 0 || *(arg1 + 0xa4) != 0x3ea)
                goto label_611077
        case 0xd, 0xf
        label_611077:
            
            if (sub_610ef0(arg1, *(ebx + 0x18)).b == 0)
                result.b = 0
                return result
        case 0x10
            result = sub_610ef0(arg1, 0)
            
            if (result.b == 0)
                return result
        case 0x17
            if (*(arg1 + 0x2c) != 5)
                result.b = 0
                return result
            
            cond:0_1 = *(arg1 + 0x204) == *(ebx + 0x18)
            goto label_6110b8

result.b = 1
return result
