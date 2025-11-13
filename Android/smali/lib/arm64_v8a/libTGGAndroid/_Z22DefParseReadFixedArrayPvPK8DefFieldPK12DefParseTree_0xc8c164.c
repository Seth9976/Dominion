// 函数: _Z22DefParseReadFixedArrayPvPK8DefFieldPK12DefParseTree
// 地址: 0xc8c164
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0_1 = DefinitionGetSize(*(arg2 + 0x30))
int32_t x23 = *(arg2 + 0x38)
void* result = DefinitionGetFieldData(arg1, arg2)
DefParseItem** x25 = *(arg3 + 8)

if (x25 != 0)
    void* result_1 = result
    int32_t x24_1 = 0
    
    while (true)
        DefParseItem* x21_1 = *x25
        x25 = x25[1]
        result = strcasecmp(*(arg2 + 8), XString::operator char const*())
        
        if (result.d == 0)
            int32_t x0_9 = DefTypeCanBeInArray(*(arg2 + 0x30))
            DefMap* x1_3 = *(arg2 + 0x30)
            
            if ((x0_9 & 1) == 0)
                DefTypeIsBuiltIn(x1_3)
                result = DefParseReadBlock(result_1, *(arg2 + 0x30), *(x21_1 + 0x18), false)
                x24_1 += 1
                
                if (x24_1 == x23)
                    break
            else
                result = DefParseReadSimpleField(result_1, x1_3, arg2, x21_1)
                x24_1 += 1
                
                if (x24_1 == x23)
                    break
            
            result_1 += sx.q(x0_1)
            
            if (x25 == 0)
                break
        else
            if (x25 == 0)
                break

return result
