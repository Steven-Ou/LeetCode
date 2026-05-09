import { Component } from '@angular/core';
import { CommonModule } from '@angular/common';

@Component({
  selector: 'app-root',
  standalone: true,
  imports: [CommonModule], // Ensure CommonModule is here
  templateUrl: './app.component.html',
  styleUrl: './app.component.css'
})
export class AppComponent {
  doctors = [
    { name: 'Cindy', appointmentCount: 3 },
    { name: 'Leo', appointmentCount: 1 },
    { name: 'Charlene', appointmentCount: 0 }
  ];
}
