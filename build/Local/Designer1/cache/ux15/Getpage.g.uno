[Uno.Compiler.UxGenerated]
public partial class Getpage: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    global::Uno.UX.Property<string> temp_Url_inst;
    internal global::Fuse.Reactive.EventBinding temp_eb2;
    internal global::Fuse.Controls.DockPanel topPanel;
    internal global::Fuse.Reactive.EventBinding temp_eb3;
    internal global::Fuse.Controls.ScrollView detailSV;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "temp_eb2",
        "topPanel",
        "temp_eb3",
        "detailSV"
    };
    static Getpage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public Getpage(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp1 = new global::Fuse.Reactive.Data("GetImage");
        var temp2 = new global::Fuse.Reactive.Data("goBack");
        var temp = new global::Fuse.Controls.Image();
        temp_Url_inst = new example01_FuseControlsImage_Url_Property(temp, __selector0);
        var temp3 = new global::Fuse.Reactive.Data("images");
        var temp4 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp5 = new global::Fuse.Controls.DockPanel();
        var temp6 = new global::Fuse.Navigation.Activated();
        var temp7 = new global::Fuse.Triggers.Actions.Callback();
        temp_eb2 = new global::Fuse.Reactive.EventBinding(temp1);
        topPanel = new global::Fuse.Controls.DockPanel();
        var temp8 = new global::Fuse.Controls.Button();
        var temp9 = new global::Fuse.Gestures.Clicked();
        var temp10 = new global::Fuse.Triggers.Actions.Callback();
        temp_eb3 = new global::Fuse.Reactive.EventBinding(temp2);
        var temp11 = new global::Fuse.Drawing.StaticSolidColor(float4(0.2f, 0.2f, 0.2f, 1f));
        detailSV = new global::Fuse.Controls.ScrollView();
        var temp12 = new global::Fuse.Controls.StackPanel();
        var temp13 = new global::Fuse.Reactive.DataBinding(temp_Url_inst, temp3, Fuse.Reactive.BindingMode.Default);
        var temp14 = new global::Fuse.Drawing.StaticSolidColor(float4(1f, 1f, 1f, 1f));
        this.SourceLineNumber = 1;
        this.SourceFileName = "Page/Getpage.ux";
        temp4.LineNumber = 4;
        temp4.FileName = "Page/Getpage.ux";
        temp4.SourceLineNumber = 4;
        temp4.SourceFileName = "Page/Getpage.ux";
        temp4.File = new global::Uno.UX.BundleFileSource(import("../../../../../Page/Getjs.js"));
        temp5.SourceLineNumber = 6;
        temp5.SourceFileName = "Page/Getpage.ux";
        temp5.Background = temp14;
        temp5.Children.Add(temp6);
        temp5.Children.Add(topPanel);
        temp5.Children.Add(detailSV);
        temp6.SourceLineNumber = 7;
        temp6.SourceFileName = "Page/Getpage.ux";
        temp6.Actions.Add(temp7);
        temp6.Bindings.Add(temp_eb2);
        temp7.SourceLineNumber = 8;
        temp7.SourceFileName = "Page/Getpage.ux";
        temp7.Handler += temp_eb2.OnEvent;
        temp1.SourceLineNumber = 8;
        temp1.SourceFileName = "Page/Getpage.ux";
        topPanel.Name = __selector1;
        topPanel.SourceLineNumber = 10;
        topPanel.SourceFileName = "Page/Getpage.ux";
        global::Fuse.Controls.DockPanel.SetDock(topPanel, Fuse.Layouts.Dock.Top);
        topPanel.Background = temp11;
        topPanel.Children.Add(temp8);
        temp8.Text = "< Back";
        temp8.SourceLineNumber = 11;
        temp8.SourceFileName = "Page/Getpage.ux";
        global::Fuse.Controls.DockPanel.SetDock(temp8, Fuse.Layouts.Dock.Left);
        temp8.Children.Add(temp9);
        temp9.SourceLineNumber = 12;
        temp9.SourceFileName = "Page/Getpage.ux";
        temp9.Actions.Add(temp10);
        temp9.Bindings.Add(temp_eb3);
        temp10.SourceLineNumber = 13;
        temp10.SourceFileName = "Page/Getpage.ux";
        temp10.Handler += temp_eb3.OnEvent;
        temp2.SourceLineNumber = 13;
        temp2.SourceFileName = "Page/Getpage.ux";
        detailSV.Name = __selector2;
        detailSV.SourceLineNumber = 19;
        detailSV.SourceFileName = "Page/Getpage.ux";
        global::Fuse.Controls.DockPanel.SetDock(detailSV, Fuse.Layouts.Dock.Fill);
        detailSV.Children.Add(temp12);
        temp12.Orientation = Fuse.Layouts.Orientation.Horizontal;
        temp12.Margin = float4(10f, 10f, 10f, 10f);
        temp12.SourceLineNumber = 21;
        temp12.SourceFileName = "Page/Getpage.ux";
        temp12.Children.Add(temp);
        temp.SourceLineNumber = 22;
        temp.SourceFileName = "Page/Getpage.ux";
        temp.Bindings.Add(temp13);
        temp3.SourceLineNumber = 22;
        temp3.SourceFileName = "Page/Getpage.ux";
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(temp_eb2);
        __g_nametable.Objects.Add(topPanel);
        __g_nametable.Objects.Add(temp_eb3);
        __g_nametable.Objects.Add(detailSV);
        this.Children.Add(temp4);
        this.Children.Add(temp5);
    }
    static global::Uno.UX.Selector __selector0 = "Url";
    static global::Uno.UX.Selector __selector1 = "topPanel";
    static global::Uno.UX.Selector __selector2 = "detailSV";
}
