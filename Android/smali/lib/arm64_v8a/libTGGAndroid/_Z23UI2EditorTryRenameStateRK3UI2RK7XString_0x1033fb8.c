// 函数: _Z23UI2EditorTryRenameStateRK3UI2RK7XString
// 地址: 0x1033fb8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* result = operator==(arg2, &data_793a18)

if ((result.d & 1) == 0)
    result = TryGetEditorOverride(arg1)
    
    if (result != 0)
        *result
        char var_38
        XString::XString(&var_38)
        UI2* var_2040
        int32_t i_2 = GetLinkedElements(arg1, &var_2040, 0x400)
        
        if (i_2 s>= 1)
            uint64_t i_1 = zx.q(i_2)
            UI2** x23_1 = &var_2040
            uint64_t i
            
            do
                UI2* x21_1 = *x23_1
                
                if (UI2FindOverride(x21_1, arg2) == 0)
                    char** x0_7 = UI2FindOverride(x21_1, &var_38)
                    
                    if (x0_7 != 0)
                        DefDeepCopyString(x0_7, XString::operator char const*())
                
                i = i_1
                i_1 -= 1
                x23_1 = &x23_1[1]
            while (i != 1)
        
        UI2EditorSetEditorState(arg1, arg2)
        UI2CreateUndoCheckpoint(true)
        return XString::~XString()

return result
