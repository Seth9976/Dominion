// 函数: _Z17UI2EditorAddStateRK3UI2RK7XString
// 地址: 0x1033810
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

UI2* var_2030
int32_t i_2 = GetLinkedElements(arg1, &var_2030, 0x400)

if (i_2 s>= 1)
    uint64_t i_1 = zx.q(i_2)
    UI2** x21_1 = &var_2030
    uint64_t i
    
    do
        UI2* x0 = *x21_1
        x21_1 = &x21_1[1]
        UI2EditorAddStateSingle(x0, arg2)
        i = i_1
        i_1 -= 1
    while (i != 1)

return UI2CreateUndoCheckpoint(true) __tailcall
