#import "@@PROJECTNAME@@.h"

@implementation @@PROJECTNAME@@

- (NSUInteger)numberOfProvidedModules
{
	//return the number of modules provided by this provider here
}

- (NSString*)identifierForModuleAtIndex:(NSUInteger)index
{
	//return a unique identifier for every module provided by this provider here
}

- (id)moduleInstanceForModuleIdentifier:(NSString*)identifier
{
	//return the module instance (the object that conforms to CCUIContentModule)
	//best practice: store the instance inside an NSMutableDictionary after creating it and return it from there if it already exists
}

- (NSString*)displayNameForModuleIdentifier:(NSString*)identifier
{
	//return the name for the module that is displayed in settings
}

//For more methods you can implement, check out CCSModuleProvider.h

@end
