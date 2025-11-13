// 函数: sub_1105c18
// 地址: 0x1105c18
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg3 + 0x33) = 0
__builtin_memset(&arg3[4], 0, 0x12)
*arg3 = arg2
arg3[3].d = 0xff00
void* var_38 = arg2
uint64_t x9 = zx.q(*arg2)
void* x8_1 = &arg2[1]
int32_t* x20 = arg2
var_38 = x8_1
void* x22

if (x9.d == 0xffffffff)
    void* x9_2 = *(x20 + 4)
    x8_1 = &x20[3]
    var_38 = x8_1
    x22 = x9_2 + x8_1
    
    if (x9_2 == 0)
        return nullptr
else
    x22 = x8_1 + x9
    
    if (x9 == 0)
        return nullptr

if (*x8_1 != 0)
    return "CIE ID is not zero"

var_38 = x8_1 + 4
uint32_t x9_4 = zx.d(*(x8_1 + 4))

if ((x9_4 | 2) != 3)
    return "CIE version is not 1 or 3"

void* x23_1 = x8_1 + 5
void* x10_2 = -5 - x8_1
void* x8_2 = x23_1
uint32_t i

do
    var_38 = x8_2
    i = zx.d(*x8_2)
    x8_2 += 1
    x10_2 -= 1
while (i != 0)
int64_t x11_1 = 0
int64_t x13_1 = 0
int64_t x15_1 = 0
void* x12_1 = x22 - x8_2
var_38 = x8_2
char const* const x2_1
char const* const x3_2
int64_t (* x19_1)()

while (true)
    if (x12_1 == x11_1)
    label_1105fc4:
        x2_1 = "getULEB128"
        x19_1 = __sF + 0x130
        x3_2 = "truncated uleb128 expression"
        break
    
    if (x13_1 u<= 0x3f)
        uint64_t x14_1 = zx.q(*(x8_2 + x11_1))
        int64_t x17_1 = x14_1 & 0x7f
        int64_t x16_1 = x17_1 << x13_1
        
        if (x16_1 u>> x13_1 == x17_1)
            x15_1 |= x16_1
            x13_1 += 7
            x11_1 += 1
            
            if ((sx.d((x14_1.d).b) & 0x80000000) != 0)
                continue
            
            int64_t x14_3 = 0
            int64_t x13_2 = 0
            var_38 = x8_2 + x11_1
            arg3[5].d = x15_1.d
            
            while (true)
                if (x12_1 == x11_1)
                    x2_1 = "getSLEB128"
                    x19_1 = __sF + 0x130
                    x3_2 = "truncated sleb128 expression"
                    break
                
                uint64_t x15_2 = zx.q(*(x8_2 + x11_1))
                x11_1 += 1
                x13_2 |= (x15_2 & 0x7f) << x14_3
                x14_3 += 7
                
                if ((x15_2.d & 0x80) == 0)
                    int32_t x12_4
                    
                    if (((x14_3.d - 7 u< 0x39 ? 1 : 0) & (x15_2.d & 0x40) u>> 6) != 0)
                        x12_4 = (-1 << x14_3).d
                    else
                        x12_4 = 0
                    
                    void* x8_3 = x8_2 + x11_1
                    var_38 = x8_3
                    *(arg3 + 0x2c) = x13_2.d | x12_4
                    
                    if (x9_4 != 1)
                        int64_t x12_6 = 0
                        int64_t x9_7 = 0
                        void* x10_5 = x22 + x10_2 - x11_1
                        void* x11_2 = x8_3
                        
                        while (true)
                            if (x10_5 == 0)
                                goto label_1105fc4
                            
                            if (x12_6 u> 0x3f)
                                goto label_1105f9c
                            
                            uint64_t x13_3 = zx.q(*x11_2)
                            int64_t x15_4 = x13_3 & 0x7f
                            int64_t x14_5 = x15_4 << x12_6
                            
                            if (x14_5 u>> x12_6 != x15_4)
                                goto label_1105f9c
                            
                            x9_7 |= x14_5
                            x12_6 += 7
                            x11_2 += 1
                            x8_3 += 1
                            x10_5 -= 1
                            
                            if ((sx.d((x13_3.d).b) & 0x80000000) == 0)
                                var_38 = x8_3
                                *(arg3 + 0x32) = (x9_7.d).b
                                
                                if (zx.d(*x23_1) != 0x7a)
                                    break
                                
                                goto label_1105e38
                    else
                        var_38 = x8_3 + 1
                        char x9_5 = *x8_3
                        x8_3 += 1
                        *(arg3 + 0x32) = x9_5
                        
                        if (zx.d(*x23_1) == 0x7a)
                        label_1105e38:
                            int64_t x9_9 = 0
                            void* x11_3 = x8_3
                            
                            while (true)
                                if (x22 == x11_3)
                                    goto label_1105fc4
                                
                                if (x9_9 u> 0x3f)
                                    goto label_1105f9c
                                
                                uint64_t x12_7 = zx.q(*x11_3)
                                
                                if (-1 u>> x9_9 u< (x12_7 & 0x7f))
                                    goto label_1105f9c
                                
                                x9_9 += 7
                                x11_3 += 1
                                x8_3 += 1
                                
                                if ((x12_7.d & 0x80) == 0)
                                    var_38 = x8_3
                                    
                                    while (true)
                                        uint32_t x8_4 = zx.d(*x23_1)
                                        uint64_t x9_10 = zx.q(x8_4 - 0x42)
                                        
                                        if (x9_10.d u<= 0x38)
                                            switch (x9_10)
                                                case 0
                                                    SystemHintOp_BTI()
                                                    *(arg3 + 0x33) = 1
                                                case 0xa
                                                    SystemHintOp_BTI()
                                                    void* x8_6 = var_38
                                                    x23_1 += 1
                                                    *(arg3 + 0x19) = *x8_6
                                                    var_38 = x8_6 + 1
                                                    continue
                                                case 0xe
                                                    SystemHintOp_BTI()
                                                    void* x8_8 = var_38
                                                    uint32_t x3_1 = zx.d(*x8_8)
                                                    *(arg3 + 0x1a) = x3_1.b
                                                    var_38 = x8_8 + 1
                                                    *(arg3 + 0x1b) = (x8_8 + 1).b - x20.b
                                                    arg3[4] =
                                                        sub_11046b8(arg1, &var_38, x22, x3_1, 0)
                                                    x23_1 += 1
                                                    continue
                                                case 0x10
                                                    SystemHintOp_BTI()
                                                    void* x8_11 = var_38
                                                    x23_1 += 1
                                                    arg3[3].b = *x8_11
                                                    var_38 = x8_11 + 1
                                                    continue
                                                case 0x11
                                                    SystemHintOp_BTI()
                                                    arg3[6].b = 1
                                                    x23_1 += 1
                                                    continue
                                        else if (x8_4 == 0)
                                            break
                                        
                                        SystemHintOp_BTI()
                                        x23_1 += 1
                                    
                                    x20 = *arg3
                                    x8_3 = var_38
                                    break
                    
                    arg3[1] = x22 - x20
                    arg3[2] = x8_3
                    return nullptr
            
            break
    
label_1105f9c:
    x2_1 = "getULEB128"
    x19_1 = __sF + 0x130
    x3_2 = "malformed uleb128 expression"
    break

fprintf(x19_1, "libunwind: %s - %s\n", x2_1, x3_2)
fflush(x19_1)
abort()
noreturn
