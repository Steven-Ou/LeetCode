import { Component } from '@angular/core';
import { RouterOutlet } from '@angular/router';

@Component({
  selector: 'app-root',
  imports: [RouterOutlet],
  templateUrl: './app.component.html',
  styleUrl: './app.component.css'
})
export class AppComponent {
  title = 'clinic-frontend';
  doctors = [
    { name: 'Cindy', appointmentCount: 1 },
    { name: 'Leo', appointmentCount: 2 },
    { name: 'Charlene', appointmentCount: 0 }
  ];
}
