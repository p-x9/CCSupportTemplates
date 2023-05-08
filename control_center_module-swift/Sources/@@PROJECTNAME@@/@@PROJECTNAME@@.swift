import @@PROJECTNAME@@C

class @@PROJECTNAME@@: CCUIToggleModule {

    // Return the icon of your module here
    override var iconGlyph: UIImage {
        UIImage(named: "Icon", in: .init(for: Self.self), with: nil) ?? UIImage()
    }

    //Return the color selection color of your module here
    override var selectedColor: UIColor {
        .blue
    }

    override var isSelected: Bool {
        didSet {
            if isSelected {
                //Your module got selected, do something
            } else {
                //Your module got unselected, do something
            }
        }
    }
}
