//
//  MapPin.h
//  Map View App
//
//  Created by Mustafa Kılınç on 17.09.2021.
//

#import <Foundation/Foundation.h>
#import <MapKit/MapKit.h>


@interface MapPin : NSObject <MKAnnotation>{
    
    CLLocationCoordinate2D coordinate;
    
}

@property (nonatomic, assign) CLLocationCoordinate2D coordinate;

@end


