// 函数: _Z40DefParseTreeMakeFromDefinitionAttribTreeP12DefParseTreeP11AttribTableP10AttribTreePKcj
// 地址: 0xc8f0ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

DefParseTree* x22 = arg1
char const* var_c70 = arg4
int32_t var_460[0x100]
memset(&var_460, 0, 0x400)
void var_c58
int64_t result = memset(&var_c58, 0, 0x7f8)
DefParseTree* var_c60 = x22

if (*(arg3 + 8) s>= 1)
    int64_t x25_1 = 0
    int64_t fp_1 = 0
    
    while (true)
        int64_t x8_1 = (fp_1 & 0xffffffff) << 0x20 s>> 0x1e
        *(&var_460 + x8_1) -= 1
        int64_t x28_1 = *arg3
        char var_c68
        XString::XString(&var_c68)
        DefParseTree* x0_4 = DefParseTreeAppendItemVariableArray(x22, &var_c68)
        (&var_c60)[sx.q(fp_1.d + 1)] = x0_4
        result = XString::~XString()
        int32_t* x19_1 = x28_1 + x25_1 * 0x18
        
        if (*x19_1 s>= 1)
            int64_t x24_1 = 0
            int64_t i = 0
            
            do
                result = DefParseTreeMakeFromDefinitionTagValue(x0_4, arg2, 
                    *(x28_1 + x25_1 * 0x18 + 8) + x24_1)
                i += 1
                x24_1 += 0x10
            while (i s< sx.q(*x19_1))
        
        int32_t x9_3 = *(x28_1 + x25_1 * 0x18 + 0x10)
        int64_t x8_7 = sx.q(fp_1.d + 1)
        var_460[x8_7] = x9_3
        
        if (x8_7.d s< 1 || x9_3 != 0)
            fp_1 = x8_7
        else
            int32_t i_1
            
            do
                fp_1 = x8_7 - 1
                
                if (x8_7 s< 2)
                    break
                
                void var_464
                i_1 = *(&var_464 + (x8_7 << 2))
                x8_7 = fp_1
            while (i_1 == 0)
        
        x25_1 += 1
        
        if (x25_1 s>= sx.q(*(arg3 + 8)))
            break
        
        x22 = *(&var_c60 + ((fp_1 & 0xffffffff) << 0x20 s>> 0x1d))

return result
