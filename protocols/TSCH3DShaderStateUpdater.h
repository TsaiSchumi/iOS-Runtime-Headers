/* Generated by RuntimeBrowser.
 */

@protocol TSCH3DShaderStateUpdater

@required

- (int)attribute:(NSString *)arg1 resource:(TSCH3DResource *)arg2 specs:(const struct AttributeSpecs { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg3;
- (int)texture:(id)arg1 attributes:(const struct TextureAttributes { int x1; int x2; BOOL x3; BOOL x4; BOOL x5; int x6; struct TextureSizeHint { int x_7_1_1; struct tvec2<int> { union { int x_1_3_1; int x_1_3_2; int x_1_3_3; } x_2_2_1; union { int x_2_3_1; int x_2_3_2; int x_2_3_3; } x_2_2_2; } x_7_1_2; } x7; BOOL x8; }*)arg2;

@end