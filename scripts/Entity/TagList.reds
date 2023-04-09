public native struct TagList {
    native let tags: array<CName>;

    public static native func IsEmpty(self: script_ref<TagList>) -> Bool
    public static native func HasTag(self: script_ref<TagList>, tag: CName) -> Bool
    public static native func AddTag(self: script_ref<TagList>, tag: CName)
    public static native func RemoveTag(self: script_ref<TagList>, tag: CName)
    public static native func Clear(self: script_ref<TagList>)
}
