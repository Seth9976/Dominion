// 函数: _Z16MaterialTagTraceP18AttribTagValuePair
// 地址: 0xf7c304
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0_1 = AttribTagGetField(*gMaterialAttribTable, *arg1)
uint64_t x8_2 = zx.q(*(*(x0_1 + 0x18) + 0x18) - 1)

if (x8_2.d u<= 0xe)
    switch (x8_2)
        case 0
            if ((zx.d(*(x0_1 + 0x50)) & 2) == 0)
                goto label_f7c35c
            
            SymbolMapLookupName(*(x0_1 + 0x38), *(arg1 + 8))
            *(x0_1 + 8)
            return XTrace("    %s = %s") __tailcall
        case 3
            *(arg1 + 8)
            *(x0_1 + 8)
            return XTrace("    %s = %g") __tailcall
        case 7
            *(x0_1 + 8)
            *(arg1 + 8)
            return XTrace("    %s = %s") __tailcall
        case 9
        label_f7c35c:
            *(x0_1 + 8)
            *(arg1 + 8)
            return XTrace("    %s = %d") __tailcall
        case 0xe
            *(arg1 + 8)
            *(x0_1 + 8)
            XString::operator char const*()
            return XTrace("    %s = %s") __tailcall

*(x0_1 + 8)
return XTrace("    %s = <something>") __tailcall
