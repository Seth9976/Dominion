// 函数: _Z18DomGameUndoRequesti13DecisionStyle
// 地址: 0xb34d44
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (zx.d(*(gDomClient + 0x22134)) != 0)
label_b34db4:
    void* x0_1 = ActiveGame()
    *(x0_1 + 0x20) |= 1
    LocalGameSave(ActiveGame(), *(GetClient() + 0x506c))
else
    void* x0 = ActiveGame()
    uint64_t i_1 = zx.q(*(x0 + 0x11b4))
    
    if (i_1.d s>= 1)
        void* x9_1 = x0 + 0x74
        uint64_t i
        
        do
            int32_t x12_2 = *x9_1 - 0x3e9
            
            if (x12_2 u<= 4 && (1 << x12_2 & 0x19) != 0)
                goto label_b34db4
            
            i = i_1
            i_1 -= 1
            x9_1 += 0x22c
        while (i != 1)

if (arg2 != 2)
    return DomGameUndo(arg1, 1) __tailcall

if (*(GetClient() + 0x5068) != 2 && (zx.d(*(ActiveGame() + 0x20)) & 1) == 0)
    *gDecisionIndexToUndo = arg1
    return GameMsgBoxTranslated("dom_msg_confirm_undo_header", "dom_msg_confirm_undo_body", 0x21, 
        "dom_msg_confirm_undo_daily_ok", nullptr, sub_bad030, nullptr) __tailcall

return DomGameUndo(arg1, 0) __tailcall
