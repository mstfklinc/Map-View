//
//  ViewController.h
//  Map View App
//
//  Created by Mustafa Kılınç on 17.09.2021.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>
#import "MapPin.h"

@interface ViewController : UIViewController <MKMapViewDelegate,
CLLocationManagerDelegate>{
    
    CLLocationManager *locationManager;
    
}


@property (weak, nonatomic) IBOutlet MKMapView *mapView;

- (IBAction)standart:(id)sender;
- (IBAction)satelite:(id)sender;
- (IBAction)hybrid:(id)sender;
- (IBAction)locate:(id)sender;
- (IBAction)directions:(id)sender;



@end

