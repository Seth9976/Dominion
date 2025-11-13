// 函数: _Z17UI2ExpressionEvalRK7UI2ExpriRK16UI2StateBindings
// 地址: 0x1010600
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v10
int64_t var_60 = v10
int64_t v9
int64_t var_58 = v9
int64_t v8
int64_t var_50 = v8
uint64_t x20
uint64_t var_10 = x20
uint64_t x9_1 = zx.q(*arg1 - 1)

if (x9_1.d u> 0xc)
label_1010afc:
    pthread_kill(pthread_self(), 6)
    XNoReturn()
label_1010b10:
    pthread_kill(pthread_self(), 6)
    int64_t* x0_41 = XNoReturn()
    XString::~XString()
    XString::~XString()
    sub_1101e04(x0_41)
    noreturn

x20 = zx.q(arg2)
void var_210
void var_180
int32_t var_f0
UI2EvalResult* entry_x8

switch (x9_1)
    case 0, 1, 2, 3, 4, 0xb
        return UI2ExprToEvalResult(arg1) __tailcall
    case 5
        goto label_1010afc
    case 6
        UI2ExpressionEval(*(arg1 + 0x18), x20.d, arg3)
        int64_t v0_19 = ResultAsFloat(&var_f0, 0f)
        UI2ExpressionEval(*(arg1 + 0x20), x20.d, arg3)
        UI2EvalResultMakeVec2(v0_19.d, ResultAsFloat(&var_180, 0f))
    label_10109fc:
        XString::~XString()
        XString::~XString()
        XString::~XString()
        XString::~XString()
        XString::~XString()
        XString::~XString()
        XString::~XString()
        return XString::~XString()
    case 7
        UI2ExpressionEval(*(arg1 + 0x18), x20.d, arg3)
        int64_t v0_12 = ResultAsFloat(&var_f0, 0f)
        UI2ExpressionEval(*(arg1 + 0x20), x20.d, arg3)
        int64_t v0_14 = ResultAsFloat(&var_180, 0f)
        UI2ExpressionEval(*(arg1 + 0x28), x20.d, arg3)
        UI2EvalResultMakeVec3(v0_12.d, v0_14.d, ResultAsFloat(&var_210, 0f))
        goto label_10109d8
    case 8
        UI2ExpressionEval(*(arg1 + 0x18), x20.d, arg3)
        int64_t v0_3 = ResultAsFloat(&var_f0, 0f)
        UI2ExpressionEval(*(arg1 + 0x20), x20.d, arg3)
        int64_t v0_5 = ResultAsFloat(&var_180, 0f)
        UI2ExpressionEval(*(arg1 + 0x28), x20.d, arg3)
        int64_t v0_7 = ResultAsFloat(&var_210, 0f)
        UI2ExpressionEval(*(arg1 + 0x30), x20.d, arg3)
        void var_2a0
        UI2EvalResultMakeVec4(v0_3.d, v0_5.d, v0_7.d, ResultAsFloat(&var_2a0, 0f))
        XString::~XString()
        XString::~XString()
        XString::~XString()
        XString::~XString()
    label_10109d8:
        XString::~XString()
        XString::~XString()
        XString::~XString()
        XString::~XString()
        goto label_10109fc
    case 9
        *(arg1 + 0x10)
        XString::XString(&var_f0, *(arg1 + 8))
        char* s2 = XString::operator char const*()
        uint64_t x23_1 = zx.q(*(arg3 + 8))
        
        if (x23_1.d s< 1)
        label_1010ad8:
            UI2EvalResult::UI2EvalResult(entry_x8)
        else
            void* x24_1 = *arg3
            uint64_t x25_1 = x23_1
            void* x21_2 = x24_1
            
            while (true)
                int32_t x8_4 = *(x21_2 + 8)
                
                if ((x8_4 == x20.d || x8_4 == 0xffffffff) && strcasecmp(*(*x21_2 + 0x10), s2) == 0)
                    UI2StateToEvalResult(x21_2)
                    break
                
                uint64_t temp0_1 = x25_1
                x25_1 -= 1
                x21_2 += 0x30
                
                if (temp0_1 == 1)
                    void* x8_11 = x24_1 + 8
                    
                    while (*(x8_11 - 8) != UIS_EDITOR || *x8_11 + 1 u>= 2)
                        uint64_t temp1_1 = x23_1
                        x23_1 -= 1
                        x8_11 += 0x30
                        
                        if (temp1_1 == 1)
                            goto label_1010ad8
                    
                    XString::GetString()
                    XFormatString("[%s]")
                    UI2EvalResultMakeNullString(&var_180)
                    XString::~XString()
                    break
        
        return XString::~XString()
    case 0xa
        UI2ExpressionEval(*(arg1 + 0x18), x20.d, arg3)
        UI2ExpressionEval(*(arg1 + 0x20), x20.d, arg3)
        
        if (var_f0 - 9 u> 1)
            UI2EvalResult::UI2EvalResult(entry_x8)
        else
            UI2EvalResult::UI2EvalResult(entry_x8)
        
        goto label_10109fc
    case 0xc
        UI2ExpressionEval(*(arg1 + 0x18), x20.d, arg3)
        UI2ExpressionEval(*(arg1 + 0x20), x20.d, arg3)
        UI2ExpressionEval(*(arg1 + 0x28), x20.d, arg3)
        XString::XString()
        XString::XString()
        XString::XString()
        int128_t v0_23
        int128_t v1_5
        v0_23, v1_5 = XString::XString()
        int32_t x8_7 = var_f0
        *(entry_x8 + 0x88) = 2
        *(entry_x8 + 4) = 1
        *(entry_x8 + 8) = 0x3f800000
        int32_t var_1f8
        *(entry_x8 + 0x40) = var_1f8
        *entry_x8 = x8_7
        int128_t var_168
        int128_t var_d8
        
        if (x8_7 == 7)
            *(entry_x8 + 0x18) = var_d8
            *(entry_x8 + 0x58) = var_168
            goto label_10109d8
        
        if (x8_7 != 8)
            goto label_1010b10
        
        *(entry_x8 + 0x18) = var_d8.d
        *(entry_x8 + 0x58) = var_168.d
        goto label_10109d8
