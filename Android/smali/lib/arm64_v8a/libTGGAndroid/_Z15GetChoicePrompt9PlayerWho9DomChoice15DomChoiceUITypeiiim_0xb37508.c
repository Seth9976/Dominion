// 函数: _Z15GetChoicePrompt9PlayerWho9DomChoice15DomChoiceUITypeiiim
// 地址: 0xb37508
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg3 != 0)
    return GetPromptCustom(arg1, zx.q(arg3), arg3, arg5, arg6, arg7) __tailcall

uint64_t x8_2 = zx.q(arg2 - 1)

if (x8_2.d u> 7)
    pthread_kill(pthread_self(), 6)
    int64_t x0_30
    int64_t x1_18
    int32_t x2_9
    int32_t x3_9
    int32_t x4_9
    uint64_t x5_9
    x0_30, x1_18, x2_9, x3_9, x4_9, x5_9 = XNoReturn()
    return GetPromptCustom(x0_30, x1_18, x2_9, x3_9, x4_9, x5_9) __tailcall

char* entry_x8

switch (x8_2)
    case 0
        return XString::XString(entry_x8) __tailcall
    case 1
        return XString::XString(entry_x8) __tailcall
    case 2
        return XString::XString(entry_x8) __tailcall
    case 3
        int32_t x0_5 = *(gDomClient + 0x207b0)
        char var_18
        char const* const x0_16
        
        if (x0_5 != arg5)
            if (arg4 == 0)
                WrittenWordFromNumber(x0_5)
                XString::GetString()
                XString::XString(&var_18)
                x0_16 = "dom_prompt_choose_at_least_btn"
            else if (x0_5 s<= arg4)
                WrittenWordFromNumber(arg5 - arg4)
                XString::GetString()
                XString::XString(&var_18)
                x0_16 = "dom_prompt_choose_up_to_more_btn"
            else
                WrittenWordFromNumber(x0_5 - arg4)
                XString::GetString()
                XString::XString(&var_18)
                x0_16 = "dom_prompt_choose_at_least_more_btn"
        else if (arg5 != 1)
            if (arg4 == 0)
                WrittenWordFromNumber(arg5)
                goto label_b37704
            
            WrittenWordFromNumber(arg5 - arg4)
            XString::GetString()
            XString::XString(&var_18)
            x0_16 = "dom_prompt_choose_more_btn"
        else
            DoTranslate("dom_ui_one")
        label_b37704:
            XString::GetString()
            XString::XString(&var_18)
            x0_16 = "dom_prompt_choose_btn"
        
        DoTranslateWithReplacement(x0_16, "[N]", &var_18)
        XString::~XString()
        return XString::~XString()
    case 4
        return XString::XString(entry_x8) __tailcall
    case 5
        return DoTranslate("dom_prompt_ability") __tailcall
    case 6
        return DoTranslate("dom_prompt_wishing_well_name") __tailcall
    case 7
        return DoTranslateDrag("dom_prompt_choose_pile") __tailcall
