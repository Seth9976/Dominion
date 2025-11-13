// 函数: sub_11046b8
// 地址: 0x11046b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = zx.q(arg4) & 0xf
char const* const x2
char const* const x3
int64_t (* x19)()

if (x9.d u> 0xc)
label_11048d0:
    SystemHintOp_BTI()
    x2 = "getEncodedP"
    x19 = __sF + 0x130
    x3 = "unknown pointer encoding"
else
    int16_t* x8_1 = *arg2
    int64_t result
    void* x9_2
    
    switch (x9)
        case 0, 4, 0xc
            SystemHintOp_BTI()
            result = *x8_1
            x9_2 = &x8_1[4]
        case 1
            SystemHintOp_BTI()
            int64_t x10_1 = 0
            result = 0
            x9_2 = x8_1
            
            while (true)
                if (arg3 == x9_2)
                    x2 = "getULEB128"
                    x19 = __sF + 0x130
                    x3 = "truncated uleb128 expression"
                    goto label_11048c0
                
                if (x10_1 u<= 0x3f)
                    uint64_t x11_2 = zx.q(*x9_2)
                    int64_t x13_1 = x11_2 & 0x7f
                    int64_t x12_2 = x13_1 << x10_1
                    
                    if (x12_2 u>> x10_1 == x13_1)
                        result |= x12_2
                        x10_1 += 7
                        x9_2 += 1
                        
                        if ((sx.d((x11_2.d).b) & 0x80000000) == 0)
                            break
                        
                        continue
                
                x2 = "getULEB128"
                x19 = __sF + 0x130
                x3 = "malformed uleb128 expression"
                goto label_11048c0
        case 2
            SystemHintOp_BTI()
            result = zx.q(*x8_1)
            x9_2 = &x8_1[1]
        case 3
            SystemHintOp_BTI()
            result = zx.q(*x8_1)
            x9_2 = &x8_1[2]
        case 5, 6, 7, 8
            goto label_11048d0
        case 9
            SystemHintOp_BTI()
            int64_t x11_4 = 0
            int64_t x10_2 = 0
            x9_2 = x8_1
            uint64_t x12_3
            
            do
                if (arg3 == x9_2)
                    x2 = "getSLEB128"
                    x19 = __sF + 0x130
                    x3 = "truncated sleb128 expression"
                    goto label_11048c0
                
                x12_3 = zx.q(*x9_2)
                x9_2 += 1
                x10_2 |= (x12_3 & 0x7f) << x11_4
                x11_4 += 7
            while ((x12_3.d & 0x80) != 0)
            
            int64_t x11_6
            
            if (((x11_4.d - 7 u< 0x39 ? 1 : 0) & (x12_3.d & 0x40) u>> 6) != 0)
                x11_6 = -1 << x11_4
            else
                x11_6 = 0
            
            result = x10_2 | x11_6
        case 0xa
            SystemHintOp_BTI()
            result = sx.q(*x8_1)
            x9_2 = &x8_1[1]
        case 0xb
            SystemHintOp_BTI()
            int32_t* x9_6 = x8_1
            result = sx.q(*x9_6)
            x9_2 = &x9_6[1]
    
    int32_t x10_3 = arg4 & 0xff
    uint64_t x11_7 = zx.q(x10_3 u>> 4) & 7
    *arg2 = x9_2
    
    if (x11_7.d u> 5)
        goto label_11048d0
    
    switch (x11_7)
        case 0
            goto label_1104818
        case 1
            SystemHintOp_BTI()
            result += x8_1
        label_1104818:
            SystemHintOp_BTI()
            
            if ((x10_3 & 0x80) == 0)
                return result
            
            return *result
        case 2
            SystemHintOp_BTI()
            x2 = "getEncodedP"
            x19 = __sF + 0x130
            x3 = "DW_EH_PE_textrel pointer encoding not supported"
        case 3
            SystemHintOp_BTI()
            
            if (arg5 != 0)
                result += arg5
                
                if ((x10_3 & 0x80) != 0)
                    return *result
                
                return result
            
            x2 = "getEncodedP"
            x19 = __sF + 0x130
            x3 = "DW_EH_PE_datarel is invalid with a datarelBase of 0"
        case 4
            SystemHintOp_BTI()
            x2 = "getEncodedP"
            x19 = __sF + 0x130
            x3 = "DW_EH_PE_funcrel pointer encoding not supported"
        case 5
            SystemHintOp_BTI()
            x2 = "getEncodedP"
            x19 = __sF + 0x130
            x3 = "DW_EH_PE_aligned pointer encoding not supported"

label_11048c0:
fprintf(x19, "libunwind: %s - %s\n", x2, x3)
fflush(x19)
abort()
noreturn
